import CascadeProtocol.Basic

open User Func

/-!
# Rewriting / Reduction
-/

/-- Two adjacent functions cancel under **symmetric** semantics (T₁):
    both `D u ∘ E u = id` and `E u ∘ D u = id`. -/
def cancelsSymmetric (f g : Func) : Bool :=
  match f, g with
  | E u₁, D u₂ => u₁ == u₂
  | D u₁, E u₂ => u₁ == u₂
  | _, _        => false

/-- Two adjacent functions cancel under **nonsymmetric** semantics (T₂):
    only `D u ∘ E u = id`.  In composition (left-to-right) list order
    this is `D u` followed by `E u`. -/
def cancelsNonsymmetric (f g : Func) : Bool :=
  match f, g with
  | D u₁, E u₂ => u₁ == u₂
  | _, _        => false

/-- One-pass scan: remove the first adjacent cancelling pair, if any. -/
def reduceOnce (cancel : Func → Func → Bool) : Word → Option Word
  | []  => none
  | [_] => none
  | f :: g :: rest =>
    if cancel f g then some rest
    else match reduceOnce cancel (g :: rest) with
         | some w => some (f :: w)
         | none   => none

/-- Iteratively reduce until no cancelling pair remains.
    `fuel` bounds the number of reduction steps (each step removes 2 symbols). -/
def reduceAux (cancel : Func → Func → Bool) : Nat → Word → Word
  | 0,        w => w
  | fuel + 1, w =>
    match reduceOnce cancel w with
    | none   => w
    | some w' => reduceAux cancel fuel w'

/-- Reduce a word to its normal form under the given cancellation rule. -/
def reduceWord (cancel : Func → Func → Bool) (w : Word) : Word :=
  reduceAux cancel w.length w

def reduceSymmetric    (w : Word) : Word := reduceWord cancelsSymmetric w
def reduceNonsymmetric (w : Word) : Word := reduceWord cancelsNonsymmetric w

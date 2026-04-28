import CascadeProtocol.Basic

open User Func

/-!
# Rewriting / Reduction
-/

/-- In symmetric encryption, encrypting then decrypting (or vice versa) cancels out. -/
def cancelsSymmetric (f g : Func) : Bool :=
  match f, g with
  | E u₁, D u₂ => u₁ == u₂
  | D u₁, E u₂ => u₁ == u₂
  | _, _        => false

/-- In nonsymmetric encryption, only decrypting then encrypting cancels out. -/
def cancelsNonsymmetric (f g : Func) : Bool :=
  match f, g with
  | D u₁, E u₂ => u₁ == u₂
  | _, _        => false

/-- We look through the sequence once and remove the first pair that cancels out. -/
def reduceOnce (cancel : Func → Func → Bool) : Word → Option Word
  | []  => none
  | [_] => none
  | f :: g :: rest =>
    if cancel f g then some rest
    else match reduceOnce cancel (g :: rest) with
         | some w => some (f :: w)
         | none   => none

/-- We keep simplifying the sequence until nothing else cancels out. 
    We use a limit so it doesn't run forever. -/
def reduceAux (cancel : Func → Func → Bool) : Nat → Word → Word
  | 0,        w => w
  | fuel + 1, w =>
    match reduceOnce cancel w with
    | none   => w
    | some w' => reduceAux cancel fuel w'

/-- Simplify the sequence completely. -/
def reduceWord (cancel : Func → Func → Bool) (w : Word) : Word :=
  reduceAux cancel w.length w

def reduceSymmetric    (w : Word) : Word := reduceWord cancelsSymmetric w
def reduceNonsymmetric (w : Word) : Word := reduceWord cancelsNonsymmetric w

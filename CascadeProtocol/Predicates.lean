import CascadeProtocol.Basic

open User Func

/-!
# Predicates for Security Checking
-/

/-- Does `w` contain at least one encryption function? -/
def hasEncryption (w : Word) : Bool :=
  w.any fun f => match f with | E _ => true | D _ => false

/-- Does `w` contain at least one decryption function? -/
def hasDecryption (w : Word) : Bool :=
  w.any fun f => match f with | D _ => true | E _ => false

/-- Does `w` contain the function `f`? -/
def containsFunc (w : Word) (f : Func) : Bool :=
  w.any (· == f)

/-- **Balancing property**: if `D u` occurs in `w`, then `E u` must also occur.
    Intuitively, the adversary cannot net-remove `u`'s encryption layer. -/
def hasBalancingProperty (w : Word) (u : User) : Bool :=
  if containsFunc w (D u) then containsFunc w (E u) else true

/-- Does `w` contain the adjacent factor `[f, g]`? -/
def containsAdjacentPair : Word → Func → Func → Bool
  | [],          _, _ => false
  | [_],         _, _ => false
  | a :: b :: rest, f, g =>
    (a == f && b == g) || containsAdjacentPair (b :: rest) f g

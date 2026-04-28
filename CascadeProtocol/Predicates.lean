import CascadeProtocol.Basic

open User Func

/-!
# Predicates for Security Checking
-/

/-- Check if the sequence has any encryption in it. -/
def hasEncryption (w : Word) : Bool :=
  w.any fun f => match f with | E _ => true | D _ => false

/-- Check if the sequence has any decryption in it. -/
def hasDecryption (w : Word) : Bool :=
  w.any fun f => match f with | D _ => true | E _ => false

/-- Check if a specific action (like encrypting for user X) is in the sequence. -/
def containsFunc (w : Word) (f : Func) : Bool :=
  w.any (· == f)

/-- This makes sure that if a user decrypts something, they also encrypt it somewhere. 
    This prevents attackers from completely removing a user's protection. -/
def hasBalancingProperty (w : Word) (u : User) : Bool :=
  if containsFunc w (D u) then containsFunc w (E u) else true

/-- Check if two specific actions happen right next to each other. -/
def containsAdjacentPair : Word → Func → Func → Bool
  | [],          _, _ => false
  | [_],         _, _ => false
  | a :: b :: rest, f, g =>
    (a == f && b == g) || containsAdjacentPair (b :: rest) f g

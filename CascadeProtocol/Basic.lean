/-!
# Basic Building Blocks
-/

inductive User : Type where
  | X : User
  | Y : User
  deriving DecidableEq, Repr

inductive Func : Type where
  | E : User → Func   -- This means a user is encrypting a message
  | D : User → Func   -- This means a user is decrypting a message
  deriving DecidableEq, Repr

open User Func

instance : Inhabited Func := ⟨E X⟩

/-- A word is just a list of cryptographic actions happening one after another. -/
abbrev Word := List Func

/-- A protocol represents the full conversation between two people. -/
abbrev Protocol := List Word × List Word

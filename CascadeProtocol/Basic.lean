/-!
# Basic Types for Cascade Protocol
-/

inductive User : Type where
  | X : User
  | Y : User
  deriving DecidableEq, Repr

inductive Func : Type where
  | E : User → Func   -- Encryption keyed to a user
  | D : User → Func   -- Decryption keyed to a user
  deriving DecidableEq, Repr

open User Func

instance : Inhabited Func := ⟨E X⟩

/-- A *word* is a composed sequence of cryptographic functions. -/
abbrev Word := List Func

/-- A *protocol* is a pair (αᵢ list, βⱼ list) of message words. -/
abbrev Protocol := List Word × List Word

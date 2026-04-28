import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Security

open User Func

/-!
# Input Validation (Irreducibility Enforcement)
-/

/-- A word is **irreducible** under a cancellation semantics iff
    reducing it yields the same word (no adjacent pair cancels).
    Cf. Dolev–Even Definitions 6.1.2 & 6.1.3: all αᵢ, βⱼ in a
    valid protocol are assumed to be irreducible. -/
def isIrreducible (cancel : Func → Func → Bool) (w : Word) : Bool :=
  (reduceWord cancel w) == w

/-- Check that every word in a protocol is already irreducible
    under the given cancellation rule. -/
def allWordsIrreducible (cancel : Func → Func → Bool) (p : Protocol) : Bool :=
  p.1.all (isIrreducible cancel) && p.2.all (isIrreducible cancel)

/-- **Protocol validity**: all αᵢ and βⱼ must be irreducible under
    the intended semantics before the security check is meaningful. -/
def isProtocolIrreducibleSymmetric    (p : Protocol) : Bool :=
  allWordsIrreducible cancelsSymmetric p
def isProtocolIrreducibleNonsymmetric (p : Protocol) : Bool :=
  allWordsIrreducible cancelsNonsymmetric p

/-- Guarded symmetric security check: rejects invalid (reducible) protocols. -/
def checkSecureSymmetric (p : Protocol) : String :=
  if !isProtocolIrreducibleSymmetric p then
    "INVALID – protocol contains reducible words"
  else if isSecureSymmetric p then
    "SECURE (symmetric)"
  else
    "INSECURE (symmetric)"

/-- Guarded nonsymmetric security check: rejects invalid (reducible) protocols. -/
def checkSecureNonsymmetric (p : Protocol) : String :=
  if !isProtocolIrreducibleNonsymmetric p then
    "INVALID – protocol contains reducible words"
  else if isSecureNonsymmetric p then
    "SECURE (nonsymmetric)"
  else
    "INSECURE (nonsymmetric)"

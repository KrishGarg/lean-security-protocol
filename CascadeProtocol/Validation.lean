import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Security

open User Func

/-!
# Input Validation (Irreducibility Enforcement)
-/

/-- A sequence is "irreducible" if nothing cancels out when we try to simplify it. -/
def isIrreducible (cancel : Func → Func → Bool) (w : Word) : Bool :=
  (reduceWord cancel w) == w

/-- Check that every sequence in the protocol can't be simplified any further. -/
def allWordsIrreducible (cancel : Func → Func → Bool) (p : Protocol) : Bool :=
  p.1.all (isIrreducible cancel) && p.2.all (isIrreducible cancel)

/-- Check if the whole protocol is valid before we even try to see if it's secure. -/
def isProtocolIrreducibleSymmetric    (p : Protocol) : Bool :=
  allWordsIrreducible cancelsSymmetric p
def isProtocolIrreducibleNonsymmetric (p : Protocol) : Bool :=
  allWordsIrreducible cancelsNonsymmetric p

/-- Check symmetric security, but throw an error if the protocol isn't even valid. -/
def checkSecureSymmetric (p : Protocol) : String :=
  if !isProtocolIrreducibleSymmetric p then
    "INVALID – protocol contains reducible words"
  else if isSecureSymmetric p then
    "SECURE (symmetric)"
  else
    "INSECURE (symmetric)"

/-- Check nonsymmetric security, but throw an error if the protocol isn't even valid. -/
def checkSecureNonsymmetric (p : Protocol) : String :=
  if !isProtocolIrreducibleNonsymmetric p then
    "INVALID – protocol contains reducible words"
  else if isSecureNonsymmetric p then
    "SECURE (nonsymmetric)"
  else
    "INSECURE (nonsymmetric)"

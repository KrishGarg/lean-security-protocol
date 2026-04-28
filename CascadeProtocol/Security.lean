import CascadeProtocol.Basic
import CascadeProtocol.Predicates

open User Func

/-!
# Security Decision Procedures
-/

/-- Checks if a protocol is secure under symmetric rules.
    It needs an initial encryption, and both parties must stay balanced. -/
def isSecureSymmetric (p : Protocol) : Bool :=
  match p.1 with
  | []       => false
  | α₁ :: αs =>
    hasEncryption α₁ &&
    αs.all (fun α => hasBalancingProperty α X) &&
    p.2.all (fun β => hasBalancingProperty β Y)

/-- Checks if a protocol is secure under nonsymmetric rules. 
    This has slightly different balancing requirements. -/
def isSecureNonsymmetric (p : Protocol) : Bool :=
  match p.1 with
  | []       => false
  | α₁ :: αs =>
    hasDecryption α₁ ||
    (hasEncryption α₁ &&
     αs.all (fun α => hasBalancingProperty α X ||
                       containsAdjacentPair α (D X) (E Y)) &&
     p.2.all (fun β => hasBalancingProperty β Y ||
                       containsAdjacentPair β (D Y) (E X)))

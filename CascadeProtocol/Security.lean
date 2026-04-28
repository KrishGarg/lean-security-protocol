import CascadeProtocol.Basic
import CascadeProtocol.Predicates

open User Func

/-!
# Security Decision Procedures
-/

/-- **Symmetric cascade security** (Theorem 6.2.6, symmetric case).

    A protocol `(αs, βs)` is secure iff:
    1. α₁ contains at least one encryption,
    2. every αᵢ (i ≥ 2) is balanced w.r.t. X,
    3. every βⱼ (j ≥ 1) is balanced w.r.t. Y. -/
def isSecureSymmetric (p : Protocol) : Bool :=
  match p.1 with
  | []       => false
  | α₁ :: αs =>
    hasEncryption α₁ &&
    αs.all (fun α => hasBalancingProperty α X) &&
    p.2.all (fun β => hasBalancingProperty β Y)

/-- **Nonsymmetric cascade security** (Theorem 6.2.6, nonsymmetric case).

    Secure iff α₁ contains a decryption, **or** (α₁ contains encryption **and**
    every subsequent α / every β satisfies a disjunctive balancing condition). -/
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

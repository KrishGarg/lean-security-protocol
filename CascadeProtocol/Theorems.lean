import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Predicates
import CascadeProtocol.Security

open User Func

/-!
# Correctness Theorems (sorry-filled stubs)
-/

/-- The computable balancing check is correct:
    `hasBalancingProperty w u = true` iff membership of `D u` implies
    membership of `E u` in `w`. -/
theorem balancing_correct (w : Word) (u : User) :
    hasBalancingProperty w u = true ↔ (D u ∈ w → E u ∈ w) := by
  sorry

/-- **Theorem 6.2.6 (symmetric case).**
    `isSecureSymmetric` faithfully captures the three-part characterisation. -/
theorem symmetric_cascade_secure_iff (p : Protocol) (h : p.1 ≠ []) :
    isSecureSymmetric p = true ↔
      (hasEncryption p.1.head! = true) ∧
      (∀ α ∈ p.1.tail, hasBalancingProperty α X = true) ∧
      (∀ β ∈ p.2,      hasBalancingProperty β Y = true) := by
  sorry

/-- Reduction preserves word semantics under symmetric rewriting. -/
theorem reduceSymmetric_sound (w : Word) :
    reduceSymmetric w = [] → w = [] ∨ ∃ f g rest,
      w = rest ++ [f, g] ∧ cancelsSymmetric f g = true := by
  sorry

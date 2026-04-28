import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Predicates
import CascadeProtocol.Security

open User Func

/-!
# Correctness Theorems (sorry-filled stubs)
-/

/-- Proof that our balancing check correctly identifies if a user's actions are balanced. -/
theorem balancing_correct (w : Word) (u : User) :
    hasBalancingProperty w u = true ↔ (D u ∈ w → E u ∈ w) := by
  sorry

/-- Proof that our symmetric security check is mathematically accurate. -/
theorem symmetric_cascade_secure_iff (p : Protocol) (h : p.1 ≠ []) :
    isSecureSymmetric p = true ↔
      (hasEncryption p.1.head! = true) ∧
      (∀ α ∈ p.1.tail, hasBalancingProperty α X = true) ∧
      (∀ β ∈ p.2,      hasBalancingProperty β Y = true) := by
  sorry

/-- Proof that simplifying sequences doesn't change their actual meaning. -/
theorem reduceSymmetric_sound (w : Word) :
    reduceSymmetric w = [] → w = [] ∨ ∃ f g rest,
      w = rest ++ [f, g] ∧ cancelsSymmetric f g = true := by
  sorry

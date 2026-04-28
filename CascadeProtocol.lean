import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Predicates
import CascadeProtocol.Security
import CascadeProtocol.Theorems
import CascadeProtocol.Validation
import CascadeProtocol.Examples

/-!
# Two-Party Cascade Protocol Security Checker

Formalization of the security checker for two-party cascade protocols
from algebraic protocol theory (cf. Dolev–Even, Theorem 6.2.6).

## Design Choices

1. **User parameter convention in security checks.**
   "Balancing w.r.t. X" for αᵢ directly passes `X` to `hasBalancingProperty`:
   `hasBalancingProperty αᵢ X` checks that if `D X` occurs then `E X` also
   occurs.  Dually, `hasBalancingProperty βⱼ Y` checks Y-balance in β words.

2. **Partiality / list indexing.**
   `isSecureSymmetric` pattern-matches on the protocol's α-list, returning
   `false` for empty protocols. The theorem statement uses `p.1.head!` (which
   defaults to `[]` for an empty list via `Inhabited (List _)`). We note this
   partiality but keep it to match the standard statement.

3. **Reduction fuel.**
   `reduceAux` uses `w.length` as fuel (each reduction shortens the word by 2,
   so `w.length / 2` steps suffice). This avoids `partial`.

4. **No Mathlib dependency.**
   We state membership via `List.Mem` (core Lean 4) instead of `Finset`.
-/

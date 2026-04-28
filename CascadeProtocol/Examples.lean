import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Predicates
import CascadeProtocol.Security
import CascadeProtocol.Validation

open User Func

/-!
# Runnable Examples
-/

/-- The textbook protocol:
    α₁ = E_X · D_X,   β₁ = E_X · D_Y · E_X · E_X · D_Y · E_Y -/
def exampleProtocol : Protocol :=
  ( [ [E X, D X] ],                           -- α₁
    [ [E X, D Y, E X, E X, D Y, E Y] ] )           -- β₁

/-- An intentionally invalid protocol: α₁ = E_X · D_X is reducible
    under symmetric semantics (E_X and D_X cancel). -/
def invalidProtocol : Protocol :=
  ( [ [E X, D X] ],                           -- α₁  (reducible!)
    [ [E Y] ] )                                -- β₁

-- Quick sanity checks on sub-predicates
#eval hasEncryption [E Y, D X]                  -- true
#eval hasBalancingProperty [E X, D Y, E X, E X, D Y, E Y] Y
                                                -- true  (D X ∉ β₁ → vacuous)

-- *** Main result: the example protocol is SECURE under symmetric semantics ***
#eval isSecureSymmetric exampleProtocol          -- true

-- Also check nonsymmetric (α₁ contains D X → short-circuits to true)
#eval isSecureNonsymmetric exampleProtocol       -- true

-- Reduction demo
#eval reduceSymmetric [E X, D X, E Y]            -- [E Y]
#eval reduceSymmetric [D X, E X, D Y, E Y]       -- []
#eval reduceNonsymmetric [D X, E X, E Y]         -- [E Y]  (D X ∘ E X cancels)
#eval reduceNonsymmetric [E X, D X, E Y]         -- [E X, D X, E Y]  (no cancel)

-- Input validation demo
#eval isIrreducible cancelsSymmetric [E X, D X]  -- false (cancels!)
#eval isIrreducible cancelsSymmetric [E X, E Y]  -- true  (no cancel)
#eval isProtocolIrreducibleSymmetric exampleProtocol   -- false (α₁ = [E X, D X] reduces)
#eval checkSecureSymmetric exampleProtocol       -- "INVALID – ..."
#eval checkSecureSymmetric invalidProtocol       -- "INVALID – ..."

-- A truly valid + secure protocol: all words are irreducible
-- α₁ = [E Y, D X]: adjacent pair uses different users → no cancel
-- β₁ = [D Y, E X, E Y, D X]: no adjacent pair shares user+opposing op
def validSecureProtocol : Protocol :=
  ( [ [E Y, D X] ],
    [ [D Y, E X, E Y, D X] ] )
#eval isProtocolIrreducibleSymmetric validSecureProtocol   -- true
#eval checkSecureSymmetric validSecureProtocol       -- "SECURE (symmetric)"
#eval checkSecureNonsymmetric validSecureProtocol    -- "SECURE (nonsymmetric)"

import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Predicates
import CascadeProtocol.Security
import CascadeProtocol.Validation

open User Func

/-!
# Runnable Examples
-/

/-- Here's a standard example protocol. -/
def exampleProtocol : Protocol :=
  ( [ [E X, D X] ],                           -- α₁
    [ [E X, D Y, E X, E X, D Y, E Y] ] )           -- β₁

/-- Here's an invalid protocol. It's invalid because the encryption and decryption for X cancel each other out. -/
def invalidProtocol : Protocol :=
  ( [ [E X, D X] ],                           -- α₁  (reducible!)
    [ [E Y] ] )                                -- β₁

-- Let's test some basic checks
#eval hasEncryption [E Y, D X]                  -- true
#eval hasBalancingProperty [E X, D Y, E X, E X, D Y, E Y] Y
                                                -- true  (D X ∉ β₁ → vacuous)

-- Let's check if the example protocol is secure when using symmetric encryption. It is!
#eval isSecureSymmetric exampleProtocol          -- true

-- We can also check if it's secure for nonsymmetric encryption.
#eval isSecureNonsymmetric exampleProtocol       -- true

-- Let's test how sequences simplify (reduce).
#eval reduceSymmetric [E X, D X, E Y]            -- [E Y]
#eval reduceSymmetric [D X, E X, D Y, E Y]       -- []
#eval reduceNonsymmetric [D X, E X, E Y]         -- [E Y]  (D X ∘ E X cancels)
#eval reduceNonsymmetric [E X, D X, E Y]         -- [E X, D X, E Y]  (no cancel)

-- Let's test our input validation.
#eval isIrreducible cancelsSymmetric [E X, D X]  -- false (cancels!)
#eval isIrreducible cancelsSymmetric [E X, E Y]  -- true  (no cancel)
#eval isProtocolIrreducibleSymmetric exampleProtocol   -- false (α₁ = [E X, D X] reduces)
#eval checkSecureSymmetric exampleProtocol       -- "INVALID – ..."
#eval checkSecureSymmetric invalidProtocol       -- "INVALID – ..."

-- Here is a protocol that is perfectly valid and secure. 
-- Nothing cancels out unexpectedly!
def validSecureProtocol : Protocol :=
  ( [ [E Y, D X] ],
    [ [D Y, E X, E Y, D X] ] )
#eval isProtocolIrreducibleSymmetric validSecureProtocol   -- true
#eval checkSecureSymmetric validSecureProtocol       -- "SECURE (symmetric)"
#eval checkSecureNonsymmetric validSecureProtocol    -- "SECURE (nonsymmetric)"

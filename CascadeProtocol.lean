import CascadeProtocol.Basic
import CascadeProtocol.Reduction
import CascadeProtocol.Predicates
import CascadeProtocol.Security
import CascadeProtocol.Theorems
import CascadeProtocol.Validation
import CascadeProtocol.Examples

/-!
# Two-Party Cascade Protocol Security Checker

This project is a security checker for two-party cascade protocols. 
It helps us verify if a protocol is secure based on mathematical rules.

## How it works

1. **Checking user balance.**
   We check if a sequence is balanced for a user (like user X).
   If we see a decryption for X, we make sure there's also an encryption for X.

2. **Handling empty lists.**
   If a protocol doesn't have any messages, we just say it's not secure (return false).

3. **Making sure loops stop.**
   When we simplify sequences, we limit the number of steps based on the sequence length.
   This guarantees our code doesn't get stuck in an endless loop.

4. **Keeping it simple.**
   We use basic Lean 4 lists instead of complex math libraries.
-/

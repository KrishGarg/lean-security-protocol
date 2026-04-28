# Two-Party Cascade Protocol Security Checker

A formal verification tool and security checker written in [Lean 4](https://leanprover.github.io/). This project implements the security decision procedures for algebraic cascade protocols as defined in the Dolev-Even paper (specifically Theorems 6.2.6 and 6.2.8). 

The application is capable of statically analyzing an instantiated protocol's transmission sequences ($\alpha_i$ and $\beta_j$) to determine in linear time whether it is secure against an active saboteur under both symmetric and nonsymmetric semantics.

## Project Structure

The codebase has been modularized into separate files to separate concerns between core definitions, reduction semantics, and security logic:

* `CascadeProtocol/Basic.lean`: Defines the foundational data structures mapping the cryptographic alphabet and sequences (`User`, `Func`, `Word`, `Protocol`).
* `CascadeProtocol/Reduction.lean`: Handles the string-rewriting systems ($T_1$ and $T_2$) that define when adjacent cryptographic operations cancel each other out (e.g., $D_X \circ E_X = 1$). Includes the length-fueled functional reduction engine.
* `CascadeProtocol/Predicates.lean`: Contains helper functions to analyze the presence and arrangement of operators within a word (e.g., checking for the balancing property).
* `CascadeProtocol/Security.lean`: The core computational algorithms (`isSecureSymmetric` and `isSecureNonsymmetric`) that yield a boolean verdict on the security of a protocol.
* `CascadeProtocol/Validation.lean`: Input validation logic enforcing irreducibility. Ensures all primitive operators in a valid protocol are already irreducible before the security check is applied.
* `CascadeProtocol/Theorems.lean`: Stubbed out Lean 4 correctness theorems aiming to map the computable boolean logic to formal Propositional Logic.
* `CascadeProtocol/Examples.lean`: Contains instantiated examples of cascade protocols to test against the checker.
* `CascadeProtocol.lean`: The main root file that imports all the modules.

## How It Works

The checker analyzes a finite sequence of message exchanges (a `Protocol`) between an initiator (`X`) and a receiver (`Y`). 

1. **Input Validation**: The tool first checks if the input sequences are irreducible using the respective cancellation rules. If reducible, the input is rejected.
2. **Security Evaluation**: 
   * **Symmetric Semantics**: Checks if $\alpha_1$ contains encryption, and subsequent sequences are properly balanced with respect to their sending users.
   * **Nonsymmetric Semantics**: Evaluates bypass conditions, decryption presences, and adjacent sequence factors to determine security under a non-symmetric encryption scheme.

## Build and Run

Make sure you have [elan](https://github.com/leanprover/elan) and Lean 4 installed.

1. Clone or navigate to the repository directory.
2. Build the project using Lake:
   ```bash
   lake build
   ```

## Scope of Improvement

* **Proving the Correctness Theorems**: The ultimate goal is to replace the `sorry` stubs in `Theorems.lean` with actual mathematical proofs. This includes proving `balancing_correct`, `symmetric_cascade_secure_iff`, and `reduceSymmetric_sound` to formally bind the computational functions to the exact Dolev-Even characterizations.
* **Inverse String Generation for Insecure Protocols**: Currently, the checker evaluates whether a protocol is secure or insecure (boolean output). A major future improvement is to implement an algorithm that computes and outputs the exact "inverse string" (the sabotage sequence) that breaks the protocol when it is deemed insecure.

## Authors

This project is done by:
1) Krish Garg (2024A7PS0642G)
2) Farhan Anzar Dhattiwala (2024A7PS0562G)
3) Gauravi Srinivas (2024A7PS0007G)
4) Doctor Divya Kunal (2024A7PS0583G)
5) Samarth Khurana (2024A7PS0622G)

It was done as part of a Reading Course done under **Dr. A Baskar** in the Second Semester of the academic year 2025-26 in BITS Pilani, K. K. Birla Goa Campus.

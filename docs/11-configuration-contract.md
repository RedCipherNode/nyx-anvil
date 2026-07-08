# Configuration Contract

## Purpose

This document defines the configuration grammar used by Nyx-Anvil.

The goal is long-term consistency.

Every protection capability must follow the same configuration pattern, regardless of its internal implementation.

This contract is intended to keep the configuration predictable, easy to learn, and stable across future releases.

---

# Philosophy

Configuration describes **intent**, not **implementation**.

The developer tells Nyx **what** they want.

Nyx decides **how** to achieve it.

---

# General Rules

## Declarative

Configuration is declarative.

It must never describe execution order or implementation details.

Good:

```toml
[protection.obfuscation]
```

Avoid:

```toml
[[steps]]

type = "rename"
```

---

## Namespace

All protection capabilities must live under:

```toml
[protection.<name>]
```

Examples:

```toml
[protection.obfuscation]

[protection.encryption]

[protection.integrity]
```

No capability may exist outside this namespace.

---

## Naming

Capability names must use:

- lowercase
- snake_case

Good:

```toml
anti_debug

control_flow
```

Avoid:

```toml
AntiDebug

ControlFlow

antiDebug
```

---

## Activation

A protection capability is enabled simply by existing.

Example:

```toml
[protection.obfuscation]
```

means:

```
Obfuscation is enabled.
```

There is no mandatory:

```toml
enabled = true
```

Removing the section disables the capability.

---

## Consistency

Every protection capability must follow the same configuration grammar.

Common keys should always use the same names across capabilities.

For example:

```
profile
include
exclude
```

must always have the same meaning.

Avoid introducing alternative names for identical concepts.

Good:

```
profile
```

Avoid:

```
mode

preset

configuration
```

if they represent the same concept.

---

## No Special Cases

The configuration grammar should remain uniform.

Adding a new protection capability must not require inventing a new syntax.

Future capabilities should naturally fit into the existing structure.

---

# Future Extensions

Protection-specific options may be added inside each protection section.

Example:

```toml
[protection.obfuscation]

profile = "release"
```

Additional keys are allowed, but they should not violate this contract.

---

# Stability

The configuration contract is considered part of Nyx's public API.

Breaking changes should be extremely rare.
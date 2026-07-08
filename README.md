# Nyx-Anvil

> **Developer-first software protection toolkit.**

Nyx-Anvil is a modular software protection toolkit that helps developers protect their software while keeping full control over the protection process.

Unlike traditional black-box protectors, Nyx separates **protection policy** from **protection implementation**. Developers decide what should be protected, while the engine executes the protection consistently across every supported environment.

---

## Why Nyx?

Modern reverse engineering is no longer limited to manual analysis.

Automated tooling, decompilers, pattern matching, and AI-assisted analysis have significantly reduced the effort required to understand software.

Nyx is designed to increase the time, effort, and cost required to analyze protected software while preserving developer control and a practical development workflow.

Nyx does **not** aim to make reverse engineering impossible.

Instead, it focuses on making software significantly more resistant to both human and automated analysis.

---

## Key Features

* Modular protection engine
* Developer-controlled protection model
* Engine-first architecture
* Editor-independent design
* CLI-first workflow
* Extensible protection capabilities
* Deterministic execution
* Automation and CI/CD friendly

---

## Protection Capabilities

Nyx is designed as a unified software protection platform.

Current and planned capabilities include:

* Code Obfuscation
* String & Data Encryption
* Integrity Verification
* Anti-Debugging
* Anti-Tampering
* Secret Protection
* Additional protection capabilities in the future

---

## Architecture Overview

```text
                Adapters
                     │
                     ▼
                  CLI / API
                     │
                     ▼
            Protection Engine
                     │
      ┌──────────────┼──────────────┐
      ▼              ▼              ▼
 Obfuscation    Encryption    Integrity
                     │
                     ▼
                Algorithms
```

---

## Philosophy

Nyx is built around a few simple ideas.

* Developers should control protection.
* The engine should execute protection.
* Security should be practical.
* Architecture should remain modular.
* Integrations should never own protection logic.

---

## Documentation

Project documentation is organized inside the `docs/` directory.

| Document                   | Description                            |
| -------------------------- | -------------------------------------- |
| `00-vision-and-mission.md` | Project vision and long-term direction |
| `01-principles.md`         | Core engineering principles            |
| `02-architecture.md`       | High-level architecture                |
| `03-threat-model.md`       | Security assumptions and threat model  |
| `04-protection-model.md`   | Conceptual protection model            |
| `05-cli.md`                | CLI architecture                       |
| `06-engine.md`             | Protection engine                      |
| `07-adapters.md`           | Editor and platform integrations       |
| `08-configuration.md`      | Configuration model                    |
| `09-diagrams.md`           | Visual architecture diagrams           |

---

## Current Status

Nyx is currently under active architectural development.

The project is intentionally documentation-first to establish a stable foundation before implementation begins.

---

## Roadmap

* Complete architectural documentation
* Implement the protection engine
* Implement the CLI
* Develop the first protection capability
* Release the first editor adapter
* Expand protection capabilities

---

## Repository Layout

```text
engine/          Core protection engine
cli/             Command-line interface
capabilities/    Protection capabilities
adapters/        Editor and platform integrations
docs/            Project documentation
examples/        Example projects
tests/           Test suites
scripts/         Development utilities
```

## Contributing

Contributions are welcome.

Before contributing, please read the documentation to understand the project's architecture and design philosophy.

Architectural consistency is valued over implementation speed.

---

## License

This project is licensed under the MIT License.

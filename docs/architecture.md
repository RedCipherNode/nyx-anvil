# Nyx Anvil Architecture

> Status: Draft (Pre-Alpha)

## Overview

Nyx Anvil adalah CLI-based security hardening tool yang berfokus pada meningkatkan biaya reverse engineering terhadap hasil build aplikasi.

Target utama:

- Indie Game Developers
- Desktop Application Developers
- Web Developers

Project ini dirancang dengan fondasi modular sehingga dapat berkembang tanpa perubahan arsitektur besar.

---

# Design Goals

- Modular
- Extensible
- Maintainable
- Readable
- Debuggable
- Cross-platform
- Engine Agnostic

---

# Non Goals

- Menjadi anti-crack yang mustahil ditembus.
- Menggantikan DRM.
- Mengunci project pada satu engine atau bahasa.

---

# Engineering Principles

- Readability > Brevity
- Debuggability > Cleverness
- Explicit > Implicit
- Consistency > Personal Preference
- Vertical > Horizontal
- Structure Follows Necessity
- No Premature Abstraction

---

# Current Scope

Versi awal hanya berfokus pada fondasi project.

Belum ada implementasi protection.

Belum ada plugin.

Belum ada runtime.

---

# Current Tech Stack

Language:

- C++

Build System:

- CMake

IDE:

- VS Code

---

# Current Folder Structure

```text
docs/
src/

README.md
LICENSE
CMakeLists.txt
```

Folder lain akan dibuat ketika benar-benar dibutuhkan.

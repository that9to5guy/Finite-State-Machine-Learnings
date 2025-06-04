# Finite-State-Machine-Learnings

A collection of C++ implementations exploring Finite State Machines (FSM) using a clean and extensible structure.
Great for beginners learning state patterns or intermediate devs refining design techniques.

## 🧩 Modules & Concepts

### 🔁 FSM Engine
Core Finite State Machine logic. Manages transitions between different states
using a base `State` interface and a `transitionTo()` mechanism.

### 🧱 Base State Interface
Pure virtual interface defining `enter_state()`, `update_state()`,
and `get_state()` functions that all concrete states must implement.

## 📁 Subprojects

- [FSM_Bluetooth — Bluetooth State Machine](FSM_Bluetooth/README.md)

## 🧰 Requirements

- CMake >= 3.10
- C++17 compatible compiler (e.g., GCC, Clang, MSVC)
- Ninja (optional but faster builds)

## 🚀 Build Instructions

```bash
mkdir build
cd build
cmake ..           # Configure project
cmake --build .    # Build executable
```

Output binary will be: `FiniteStateMachine_BT.exe`

## 📦 How to Run

```bash
./FiniteStateMachine_BT.exe
```

## 🧹 Clean Build

```bash
cmake --build . --target clean
```

To completely clean:
```bash
cd ..
rm -r build
```

## ✅ Features

- Modular FSM architecture with clean separation of states.
- Easily extensible with new states under `BTStates/`.
- Each state inherits from the abstract `State` interface.
- Uses `std::shared_ptr` for memory safety and polymorphism.

## 🧠 Notes

- Easy to plug into embedded-style simulations or logic flows.
- Real-time `std::chrono` delay simulation available in states.
- Meant for learning FSM concepts with real-world structure.

## 📝 License

MIT License — see LICENSE file for details.

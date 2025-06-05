# 🔄 FSM_Bluetooth
A simple C++ implementation of a Bluetooth-styled Finite State Machine using object-oriented design and state pattern.


## 🎯 Purpose
This project simulates a basic FSM for Bluetooth operations—covering Idle, Search, Pairing, and Connection states. Each state is encapsulated as a class and transitions are handled cleanly using polymorphism.


## 🧱 Core Components
- **FSM Engine** — Manages state transitions
- **State Interface** — Abstract base class with lifecycle methods like `enter_state`, `update_state`
- **Bluetooth States**
  - `IdleState`
  - `SearchState`
  - `PairState`
  - `ConnectState`

## ⚙️ Build Instructions
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

This will create the executable inside the `build/` folder.

## ▶️ How to Run
```bash
./FSM_Bluetooth.exe
```

It will simulate Bluetooth state transitions with terminal output.

## 🔄 Sample Output
```
Activating FSM . . . 
Checking Idle State ..
Idle --> Search
Entering Search State ...
Checking Search State ... 2
Checking Search State ... 1
Checking Search State ... 0
Search --> Pair
Entering Pair State ....
Checking Pair State ....
Pair ID : 1582
Checking Pair State ....
Pair --> Connect
Entering Connect State .....
Checking Connect State ..... 4
Checking Connect State ..... 3
Checking Connect State ..... 2
Checking Connect State ..... 1
Checking Connect State ..... 0
Connect --> Idle
```

## 📁 Folder Structure
```bash
FSM_Bluetooth/
├── CMakeLists.txt
├── lib/
│   └── common.hpp
│   └── events.hpp
└── src/
    ├── FSM.cpp / FSM.hpp
    ├── main.cpp
    ├── State.hpp
    └── BTStates/
        ├── IdleState.cpp / IdleState.hpp
        ├── SearchState.cpp / SearchState.hpp
        ├── PairState.cpp / PairState.hpp
        └── ConnectState.cpp / ConnectState.hpp
```

## 📝 Future Additions (optional)
- Add transition events & guards
- Log state history
- Simulate timeout or failure states
- Add unit tests

---

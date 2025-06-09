/* Enum Class for State Events */

enum class Event {
    // System Events
    BT_SYS_RESET,       // X

    // Idle State
    BT_START_SEARCH,    // F
    
    // Search State
    BT_SEARCH_TIMEOUT,
    BT_SELECT_DEVICE,   // S
    
    // Pair State
    BT_PAIR_TIMEOUT,
    BT_KEY_MATCHED,     // M
    BT_KEY_INVALID,     // I

    // Connect State
    BT_CONNECTED,       // C
    BT_CONNECTION_LOST, // L
    BT_DISCONNECT,      // D
};

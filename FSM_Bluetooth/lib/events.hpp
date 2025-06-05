/* Enum Class for State Events */

enum class Event {
    // System Events
    BT_SYS_RESET,

    // Idle State
    BT_START_SEARCH,
    
    // Search State
    BT_SEARCH_TIMEOUT,
    BT_SELECT_DEVICE,
    
    // Pair State
    BT_PAIR_TIMEOUT,
    BT_KEY_MATCHED,
    BT_KEY_INVALID,

    // Connect State
    BT_CONNECTED,
    BT_CONNECTION_LOST,
    BT_DISCONNECT,
};

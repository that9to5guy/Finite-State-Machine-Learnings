/* Enum Class for State Events */
#pragma once
#include <map>
#include <string>

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

const std::map<char, Event> key_state_map = {
    {'X' , Event::BT_SYS_RESET},
    {'F' , Event::BT_START_SEARCH},
    {'S' , Event::BT_SELECT_DEVICE},
    {'M' , Event::BT_KEY_MATCHED},
    {'I' , Event::BT_KEY_INVALID},
    {'C' , Event::BT_CONNECTED},
    {'L' , Event::BT_CONNECTION_LOST},
    {'D' , Event::BT_DISCONNECT},
};

const std::map<std::string, int> state_name_ID = {
    {"Idle" , 0},
    {"Search" , 1},
    {"Pair" , 2},
    {"Connect" , 3},
};

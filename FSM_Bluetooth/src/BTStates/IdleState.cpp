/* Idle State Class | Derived Class Funcs */

#include "../FSM.hpp"
#include "IdleState.hpp"
#include "SearchState.hpp"

std::string IdleState::get_state(void) const {
    return state_name;
}

void IdleState::enter_state(FSM& fsm) {
    std::cout << "Entering Idle State .." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // 100 ms delay
}

void IdleState::update_state(FSM& fsm) {
    std::cout << "Checking Idle State .." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));  // 200 ms delay
    fsm.transitionTo(std::make_shared<SearchState>());
}

void IdleState::handle_event(Event ev, FSM& fsm) {
    if (ev == Event::BT_START_SEARCH) {
        // Implement go to Search
        std::cout << "Start Searching for Devices .." << std::endl;
        fsm.transitionTo(std::make_shared<SearchState>());
    }
    else {
        std::cout << "Currently in Idle State .." << std::endl;
    }
}

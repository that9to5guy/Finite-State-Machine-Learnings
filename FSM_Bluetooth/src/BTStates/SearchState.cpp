/* Idle State Class | Derived Class Funcs */

#include "../FSM.hpp"
#include "SearchState.hpp"
#include "PairState.hpp"

std::string SearchState::get_state(void) const {
    return state_name;
}

void SearchState::enter_state(FSM& fsm) {
    std::cout << "Entering Search State ..." << std::endl;
    is_searching = true;
    search_retry = 2;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // 100 ms delay
}

void SearchState::update_state(FSM& fsm) {
    std::cout << "Checking Search State ... " << search_retry << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));  // 200 ms delay
    if(!is_searching) {
        fsm.transitionTo(std::make_shared<PairState>());
    }
    search_retry = search_retry - 1;
    if(search_retry == 0) {
        is_searching = false;
    }
}

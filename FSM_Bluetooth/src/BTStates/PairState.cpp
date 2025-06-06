/* Pair State Class | Derived Class Funcs */

#include "../FSM.hpp"
#include "PairState.hpp"
#include "ConnectState.hpp"

std::string PairState::get_state(void) const {
    return state_name;
}

void PairState::get_pair_id(void) {
    std::cout << "Pair ID : " << pair_id << std::endl;
    is_pairing = false;
}

void PairState::enter_state(FSM& fsm) {
    std::random_device rd;
    pair_id = rd()%10000;
    is_pairing = true;
    std::cout << "Entering Pair State ...." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // 100 ms delay
}

void PairState::update_state(FSM& fsm) {
    std::cout << "Checking Pair State ...." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));  // 200 ms delay
    if(!is_pairing) {
        fsm.transitionTo(std::make_shared<ConnectState>());
    }
    else {
        get_pair_id();
    }
}

void PairState::handle_event(Event ev, FSM& fsm) {
    if (ev == Event::BT_PAIR_TIMEOUT) {
        // Implement return to Search
        std::cout << "Handle Event in PairState : " << static_cast<int>(ev) << std::endl;
    }
    if (ev == Event::BT_KEY_MATCHED) {
        // Implement go to Connect
        std::cout << "Handle Event in PairState : " << static_cast<int>(ev) << std::endl;
    }
    if (ev == Event::BT_KEY_INVALID) {
        // Implement go to Idle
        std::cout << "Handle Event in PairState : " << static_cast<int>(ev) << std::endl;
    }
}

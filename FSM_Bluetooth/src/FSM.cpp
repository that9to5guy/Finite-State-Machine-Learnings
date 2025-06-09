/* FSM Engine Class | Function Defns */

#include "FSM.hpp"
#include "./BTStates/IdleState.hpp"

FSM::FSM() {
    std::cout << "Activating FSM . . . " << std::endl;
    current_state = std::make_shared<IdleState>();
}

FSM::~FSM() {
    std::cout << "Deactivating FSM . . . " << std::endl;
}

void FSM::transitionTo(std::shared_ptr<State> next_state) {
    std::cout << current_state->get_state() << " --> "<< next_state->get_state() << std::endl;
    current_state = next_state;
    current_state->enter_state(*this);
}

void FSM::handle_state(void) {
    // current_state->update_state(*this);
    switch (state_name_ID.at(current_state->get_state()))
    {
    case 1: // Search State Timeout
        current_state->handle_event(Event::BT_SEARCH_TIMEOUT, *this);
        break;
    case 2: // Pair State Timeout
        current_state->handle_event(Event::BT_PAIR_TIMEOUT, *this);
        break;
    default:
        break;
    }
}

void FSM::dispatch_event(Event ev) {
    // std::cout << "Dispatch Event in FSM: " << static_cast<int>(ev) << std::endl;
    if (ev == Event::BT_SYS_RESET) {
        std::cout << "System Reset in FSM . . . " << std::endl;
        this->transitionTo(std::make_shared<IdleState>());
    }
    current_state->handle_event(ev, *this);
}

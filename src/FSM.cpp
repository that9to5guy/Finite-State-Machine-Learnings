/* FSM Engine Class | Function Defns */

#include "FSM.hpp"

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
    current_state->update_state(*this);
}

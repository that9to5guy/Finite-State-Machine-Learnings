/* Connect State Class | Derived Class Funcs */

#include "../FSM.hpp"
#include "ConnectState.hpp"
#include "IdleState.hpp"

std::string ConnectState::get_state(void) const {
    return state_name;
}

void ConnectState::enter_state(FSM& fsm) {
    std::cout << "Entering Connect State ....." << std::endl;
    is_connected = true;
    connection_timeout = 4;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // 100 ms delay
}

void ConnectState::update_state(FSM& fsm) {
    std::cout << "Checking Connect State ..... " << connection_timeout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(250));  // 200 ms delay
    if(!is_connected) {
        fsm.transitionTo(std::make_shared<IdleState>());
    }
    connection_timeout = connection_timeout - 1;
    if(connection_timeout == 0) {
        is_connected = false;
    }
}

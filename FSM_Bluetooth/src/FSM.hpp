/* FSM Engine Class */
#pragma once

#include "State.hpp"

class FSM {
    private:
        std::shared_ptr<State> current_state;

    public:
        FSM();

        ~FSM();

        void transitionTo(std::shared_ptr<State> nextState);

        void handle_state(void);

        void dispatch_event(Event ev);
};

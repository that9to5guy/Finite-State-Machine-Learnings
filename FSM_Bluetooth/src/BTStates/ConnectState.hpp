/* Connect State Class | Derived Class */
#pragma once

#include "../State.hpp"

class ConnectState : public State {
    private:
        inline static const std::string state_name = "Connect";
        bool is_connected;
        int connection_timeout;

    public:
        ConnectState() {};

        ~ConnectState() {};

        std::string get_state(void) const override;

        void enter_state(FSM& fsm) override;

        void update_state(FSM& fsm) override;

        void handle_event(Event ev, FSM& fsm) override;
};

/* Idle State Class | Derived Class */
#pragma once

#include "../State.hpp"

class IdleState : public State {
    private:
        inline static const std::string state_name = "Idle";

    public:
        IdleState() {};

        ~IdleState() {};

        std::string get_state(void) const override;

        void enter_state(FSM& fsm) override;

        void update_state(FSM& fsm) override;
};

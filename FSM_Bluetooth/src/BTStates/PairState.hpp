/* Pair State Class | Derived Class */
#pragma once

#include "../State.hpp"

class PairState : public State {
    private:
        inline static const std::string state_name = "Pair";
        bool is_pairing;
        int pair_id;

    public:
        PairState() {};

        ~PairState() {};

        std::string get_state(void) const override;

        void get_pair_id(void);

        void enter_state(FSM& fsm) override;

        void update_state(FSM& fsm) override;
};

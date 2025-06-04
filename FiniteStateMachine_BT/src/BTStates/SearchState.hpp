/* Idle State Class | Derived Class */
#pragma once

#include "../State.hpp"

class SearchState : public State {
    private:
        inline static const std::string state_name = "Search";
        bool is_searching;
        int search_retry;

    public:
        SearchState() {};

        ~SearchState() {};

        std::string get_state(void) const override;

        void enter_state(FSM& fsm) override;

        void update_state(FSM& fsm) override;
};

/* Pure Virtual Class | Abstract Interface |                                 **
** A pure virtual class is a class that acts as a blueprint or interface.    **
** It cannot be instantiated directly and is meant to be inherited by        **
** other classes that must define certain behaviors.                         **
** Any class that inherits from this must implement these specific functions */

#pragma once
#include "../lib/common.hpp"
#include "../lib/events.hpp"

// Forward Declaration
class FSM;

class State {
    public:
        State() {}
        
        ~State() {}

        virtual std::string get_state(void) const = 0;

        virtual void enter_state(FSM& fsm) = 0;

        virtual void update_state(FSM& fsm) = 0;

        // virtual void handle_event(Event ev, FSM& fsm) = 0;
};

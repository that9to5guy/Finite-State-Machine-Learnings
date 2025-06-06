/* Main for testing the FSM */

#include "FSM.hpp"

int main()
{
    FSM dev1;
    int reps = 33;

    dev1.dispatch_event(Event::BT_START_SEARCH);
    
    // while(reps--) {
    //     dev1.handle_state();
    //     std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 500 ms delay
    // }

    return 0;
}
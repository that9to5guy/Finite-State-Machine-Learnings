/* Main for testing the FSM */

#include "FSM.hpp"

int main()
{
    FSM dev1;
    int reps = 33;

    dev1.dispatch_event(Event::BT_START_SEARCH);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    dev1.dispatch_event(Event::BT_SEARCH_TIMEOUT);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    dev1.dispatch_event(Event::BT_START_SEARCH);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    dev1.dispatch_event(Event::BT_SELECT_DEVICE);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    dev1.dispatch_event(Event::BT_PAIR_TIMEOUT);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    dev1.dispatch_event(Event::BT_SELECT_DEVICE);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    dev1.dispatch_event(Event::BT_KEY_MATCHED);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    dev1.dispatch_event(Event::BT_CONNECTION_LOST);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    // while(reps--) {
    //     dev1.handle_state();
    //     std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 500 ms delay
    // }

    return 0;
}

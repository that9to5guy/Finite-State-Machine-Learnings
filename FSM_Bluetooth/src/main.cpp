/* Main for testing the FSM */

#include "FSM.hpp"

int main()
{
    FSM dev1;
    int time_passed = 0;
    const int time_limit_ms = 10000; // 10 seconds
    const int check_delay_ms = 200;  // How often to check (200ms)
    char input_key = 0;
    bool event_detected = false;

    while(1) {
        time_passed = 0;
        event_detected = false;
        std::cout << "\nEnter Event ID : ";
        while (time_passed < time_limit_ms) {
            if (_kbhit()) {
                input_key = _getch();
                std::cout << "\nYou pressed: " << input_key << std::endl;
                event_detected = true;
                break;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(check_delay_ms));
            time_passed += check_delay_ms;
        }

        if (event_detected) {
            if (input_key == 'Q') {
                std::cout << "Quitig FSM System . . . . .\n" << std::endl;
                break;
            }
            try {
                dev1.dispatch_event(key_state_map.at(input_key));                
            }
            catch (const std::out_of_range& ex) {
                std::cout << "Invalid Key Entered !!!" << std::endl;
            }
        }
        else {
            dev1.handle_state();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    return 0;
}

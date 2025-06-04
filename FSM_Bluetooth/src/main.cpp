/* Main for testing the FSM */

#include "FSM.hpp"

int main()
{
    FSM dev1;
    int reps = 33;

    while(reps--) {
        // std::cout << "Reps : " << reps << std::endl;
        dev1.handle_state();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));  // 500 ms delay
    }

    return 0;
}
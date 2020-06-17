//#include "countdown.hpp"
#include <ctime>
#include <iostream>
#include <thread>
#include <chrono>

// in here, the back count need to start (private method).


// Timer starter (private method)


// Timer ender (private method)


// counter (private method)
int counter(int hours){
    return hours;
}

// public set all methods inside this class methods.

std::string secondcountdown(int second){
    std::chrono::seconds s (second);
    std::chrono::seconds i (0);
    while (i <= s){
        std::this_thread::sleep_for(std::chrono::seconds(1));
//        std::cout << std::chrono::seconds(s).count() << std::endl;
        s--;
        return std::to_string(std::chrono::seconds(s).count());
    }
    return "tel";
}

int minutecountdown(int minute){
    std::chrono::minutes m (minute);
    std::chrono::seconds m_to_ms (std::chrono::duration_cast<std::chrono::seconds> (m));
    std::chrono::seconds i (0);
    while (i <= m_to_ms){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << std::chrono::seconds(m_to_ms).count() << std::endl;
        m_to_ms--;
    }
    return 0;
}

int hourscountdown(int hrs){
    // That convert to second.
    std::chrono::hours h (hrs);
    std::chrono::seconds h_to_ms (std::chrono::duration_cast<std::chrono::seconds> (h));
    std::chrono::seconds i (0);
    while(i <= h_to_ms){
        std::this_thread::sleep_for(std::chrono::seconds(1));        
        std::cout << std::chrono::seconds(h_to_ms).count()<< std::endl;
        h_to_ms--;
    } 
    return 0;
}

int to_seconds(int hours){
    return hours;
}

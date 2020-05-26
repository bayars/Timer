#include "hours.hpp"
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

int differencestimes(int hours){
    // That convert to second.
    hours = clock();
    unsigned long seconds = 10;
    // std::cout << CLOCKS_PER_SEC << "Time start..." << '\n';
    int i = 0;
    while(i <= 100){
        i++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));        std::cout << i << std::endl;
        // auto tek = ((unsigned long) clock() - hours) / CLOCKS_PER_SEC;
        // if( tek >= 10){
        //     break;
        // }
    } 
    return seconds;
}

int to_seconds(int hours){
    return hours;
}
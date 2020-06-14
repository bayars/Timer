/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  : 
 *
 *        Version:  1.0
 *        Created:  2020-05-22 07:49:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Safa Bayar (rection), safa@safabayar.tech
 *   Organization:  
 *
 * =====================================================================================
 * 
 */

#include <iostream>
#include <iomanip>
#include <ctime>
// #include <chrono>
#include "src/countdown.hpp"
// #include "qt/Timer/mainwindow.h"

// void systemclock(){
//     std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
//     std::time_t t_c = std::chrono::system_clock::to_time_t(now);
//     std::cout << "24 hour ago, the time was " << std::put_time(std::localtime(&t_c), "%F %T") << "\n";
// }


std::string mains()
{


//    std::string timemount;
//    std::cout << "Hours, Minute or second (like 1h for a hours, 1m for a minute ): ";
//    std::cin >> timemount;
    std::string timemount = "5";
//    if ( timemount.back() == 'h' ){
//        timemount.pop_back();
//        hourscountdown(std::stoi(timemount));
//    }else if( timemount.back() == 'm'){
//        timemount.pop_back();
//        minutecountdown(std::stoi(timemount));
//    }else if( timemount.back() == 's'){
        timemount.pop_back();
        return std::to_string(secondcountdown(std::stoi(timemount)));
//    }else{
//        std::cout << "You didn't give true format of time." << std::endl;
//    }
//    return 0;
}

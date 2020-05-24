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
#include <chrono>
#include "src/hours.hpp"

void systemclock(){
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t t_c = std::chrono::system_clock::to_time_t(now);
    std::cout << "24 hour ago, the time was " << std::put_time(std::localtime(&t_c), "%F %T") << "\n";
}


int main()
{
    std::string timemount;
    std::cout << "Hours, Minute or second (like 2h): ";
    std::cin >> timemount;
    if ( timemount.back() == 'h' ){
        timemount.pop_back();
        std::cout << differencestimes(std::stoi(timemount)) << std::endl;
    }else if( timemount.back() == 'm'){
        timemount.pop_back();
    }else if( timemount.back() == 's'){
        timemount.pop_back();
    }else{
        std::cout << "You didn't give true format of time." << std::endl;
    }


    // int i = 0;
    // systemclock(); 
    // std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
    // while(i < 100000){
    //     i++;
    // }
    // std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    // std::cout << "Printing took "
    //           << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
    //           << "us.\n";
    return 0;
}
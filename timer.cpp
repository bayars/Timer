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
#include "src/countdown.hpp"


int main()
{


    std::string timemount;
    std::cout << "Hours, Minute or second (like 1h for a hours, 1m for a minute ): ";
    std::cin >> timemount;
    if ( timemount.back() == 'h' ){
        timemount.pop_back();
        hourscountdown(std::stoi(timemount));
    }else if( timemount.back() == 'm'){
        timemount.pop_back();
        minutecountdown(std::stoi(timemount));
    }else if( timemount.back() == 's'){
        timemount.pop_back();
        secondcountdown(std::stoi(timemount));
    }else{
        std::cout << "You didn't give true format of time." << std::endl;
    }
    return 0;
}

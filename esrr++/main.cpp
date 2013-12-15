//
//  main.cpp
//  esrr++
//
//  Created by Fergus Cooney on 15/12/2013.
//  Copyright (c) 2013 Fergus Cooney. All rights reserved.
//

#include <iostream>
#include <thread>
#include <chrono>

void delay(int);
void puts(std::string);
void putsDelay(std::string, int);

int main(int argc, const char * argv[])
{
    using namespace std;
    
    while(1){
        cout << "\033[2J\033[1;1H";
        putsDelay("Eat",1000);
        putsDelay("Sleep",1000);
        putsDelay("Rave",1000);
        putsDelay("Repeat",1000);
    }
    return 0;
}

void delay(int ms){
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

void puts(std::string str){
    std::cout << str << std::endl;
}

void putsDelay(std::string str, int ms){
    puts(str);
    delay(ms);
}


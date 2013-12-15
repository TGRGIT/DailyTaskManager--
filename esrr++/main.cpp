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
void delay();

int main(int argc, const char * argv[])
{
    using namespace std;
    
    while(1){
        cout << "\033[2J\033[1;1H";
        cout << "Eat" << endl;
        delay();
        cout << "Sleep" << endl;
        delay();
        cout << "Rave" << endl;
        delay();
        cout << "Repeat" << endl;
        delay();
    }
    return 0;
}

void delay(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}


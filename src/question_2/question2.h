#ifndef QUESTION2_H
#define QUESTION2_H

#include <iostream>

bool test_config();

using namespace std;

class Toll 
{
public:

    Toll(int exits, int times)
    {
        exit = exits;
        time = times;
    }

    double get_amount();
    
    double get_time_multipler();

private: 

    int exit;
    int time;

};

#endif
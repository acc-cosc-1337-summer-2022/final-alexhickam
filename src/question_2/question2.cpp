#include "question2.h"
#include <iostream>

bool test_config()
{
    return true;
}

using namespace std;


double Toll::get_amount()
{
    return exit * get_time_multipler();
}

double Toll::get_time_multipler()
{
    if (time < 7) 
    {
        return  0.25;
    }

    else if (time < 9) 
    {
        return  2.5;
    }

    else if (time < 12) 
    {
        return 1;
    }

    else if (time < 15) 
    {
        return  1.5;
    }

    else if (time < 18) 
    {
        return  2.5;
    }

    else if (time < 23)
    {
        return  1;
    }
}


#include "question2.h"
#include <iostream>
#include <vector>

using namespace std;

std::ostream& operator<<(std::ostream& output, Toll toll)
{
    output << "Cost of toll is $" << toll.get_amount();
    return output;
}

int main()
{
    int exit, time; 

    char choice;

    vector<Toll> tolls; 

    cout <<"\nToll Road Calculator\n\nEXAMPLE FOR ROUNDING TO MILITARY HOURS\n\n12am-12:59am is 0 \n11pm-11:59pm is 23\n\n";

    do 
    {
        do
        {
            cout << "\nKey the Military Hour of departure from toll road: ";
            cin >> time;
            if (time < 0)
            { 
            cout << "Invalid input, positive value is required";
            }
        }         
        while (time < 0 || time > 23);
        
        do
        {
            cout << "\nKey how many exits were passed before departing from toll: "; 
            cin >> exit;
            if (exit < 0)
            { 
            cout << "Invalid input, positive value is required";
            }
        } 
        while (exit < 0);
        Toll fee(exit, time); 
        tolls.push_back(fee); 

        cout << "\nTo add another occurance,\nReturn the letter 'y'. \nAny other character will quit and return list of transactions. "; 
        cin >> choice;
    } 
    while (choice == 'y' || choice == 'Y');
    cout << endl;

       for (int counter{ 1 }; auto i : tolls)
        {
            std::cout << counter++ << ". "<< i << std::endl;
        }

    return 0;
}

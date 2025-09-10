
#include "myfunctions.h"

double calculateAverage(int nums[])
{ int DATA_SIZE = 12;
    double sum = 0;
    for (int n = 0; n < DATA_SIZE; n++)
    {
        sum += nums[n];
    }

    return sum / DATA_SIZE;
}

void promptUser(){
    cout<<"Hello. Enter a number: "<<endl;
}

int getUserInput()
{
    int userInput;
    promptUser();
    cin>>userInput;
    return userInput;
}



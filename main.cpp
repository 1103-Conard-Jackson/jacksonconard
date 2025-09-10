// Jackson Conard
#include <iostream>
using namespace std;
#include "myfunctions.h"
int main(){ int DATA_SIZE = 12;
    int userInt = getUserInput();
     
    cout<<"The User Entered: "<< userInt << "\n";
    int nums[DATA_SIZE];
    nums[0] = userInt;
    for (int i = 1; i < DATA_SIZE; i++){
        nums[i] = i;
    }
    double average = calculateAverage(nums);
    
    cout<<"Average Value: "<< average<< "\n";
    return 0;
}


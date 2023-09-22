#include "hiker.h"

int answer()
{
    return 6 * 7;
}

int sum(int firstValue, int secondValue)
{
    return firstValue + secondValue;
}

int calcFizzBuzz(int value)
{
    int retVal = -1;
    
    if(value % 3 == 0 && value % 5 == 0)
    {
        retVal = 3500;
    }
    else if(value % 3 == 0 && value % 5 != 0)
    {
        retVal = 300;
    }
    else if(value % 3 != 0 && value % 5 == 0)
    {
        retVal = 500;
    }
    else
    {
        retVal = value;
    }
       
    return retVal;
}
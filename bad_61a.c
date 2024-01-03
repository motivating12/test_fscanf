#include "baseline.h"
int badSource_61(int data);

void bad_61()
{
    int data;
    /* Initialize data */
    data = -1;
    data = badSource_61(data);
    {
        int buffer[10] = { 0 };
        /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
        * This code does check to see if the array index is negative */
        if (data >= 0)
        {
            buffer[data] = 1;//SLIVER_SINK
            
        }
        
    }
}
#include "baseline.h"
void badSink_66(int dataArray[])
{
    /* copy data out of dataArray */
    int data = dataArray[2];
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
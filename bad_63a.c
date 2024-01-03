#include "baseline.h"
void badSink_63(int * dataPtr);

void bad_63()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    badSink_63(&data);
}
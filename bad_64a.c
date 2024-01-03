#include "baseline.h"
void badSink_64(void * dataVoidPtr);

void bad_64()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    badSink_64(&data);
}
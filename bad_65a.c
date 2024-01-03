#include "baseline.h"
void badSink_65(int data);

void bad_65()
{
    int data;
    /* define a function pointer */
    void (*funcPtr) (int) = badSink_65;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    /* use the function pointer */
    funcPtr(data);
}
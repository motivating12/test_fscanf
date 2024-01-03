#include "baseline.h"
int badSource_61(int data)
{
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    return data;
}
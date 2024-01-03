#include "baseline.h"
int badGlobal_22 = 0;

void badSink_22(int data);

void bad_22()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    badGlobal_22 = 1; /* true */
    badSink_22(data);
}

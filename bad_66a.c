#include "baseline.h"
void badSink_66(int dataArray[]);

void bad_66()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    /* put data in array */
    dataArray[2] = data;
    badSink_66(dataArray);
}
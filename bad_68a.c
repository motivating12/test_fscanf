#include "baseline.h"
int badData_68;
void badsink_68();
void bad_68()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    badData_68 = data;
    badsink_68();
}
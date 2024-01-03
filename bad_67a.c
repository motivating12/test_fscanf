#include "baseline.h"
typedef struct structType_67
{
    int structFirst;
} structType_67;
void badSink_67(structType_67 myStruct);

void CWE121_Stack_Based_Buffer_Overflow__CWE129_fscanf_67_bad()
{
    int data;
    structType_67 myStruct;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    myStruct.structFirst = data;
    badSink_67(myStruct);
}
#include <stdio.h>
#include <stdlib.h>

void bad_1()
{
    int data=-1;
    
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    
    int buffer[10] = { 0 };
    if (data >= 0)
    {
        buffer[data] = 1;//SLIVER_SINK
    }
}



void bad_2()
{
    int data;
    /* Initialize data */
    data = -1;
    if(1)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(1)
    {
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
}


void bad_3()
{
    int data;
    /* Initialize data */
    data = -1;
    if(5==5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(5==5)
    {
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
}


static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */

void bad_4()
{
    int data;
    /* Initialize data */
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(STATIC_CONST_TRUE)
    {
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
}

static int staticTrue = 1; /* true */
static int staticFalse = 0; /* false */

void bad_5()
{
    int data;
    /* Initialize data */
    data = -1;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(staticTrue)
    {
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
}

static const int STATIC_CONST_FIVE = 5;

void bad_6()
{
    int data;
    /* Initialize data */
    data = -1;
    if(STATIC_CONST_FIVE == 5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(STATIC_CONST_FIVE == 5)
    {
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
}

static int staticFive = 5;
void bad_7()
{
    int data;
    /* Initialize data */
    data = -1;
    if(staticFive == 5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(staticFive == 5)
    {
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
}


static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}
void bad_8()
{
    int data;
    /* Initialize data */
    data = -1;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(staticReturnsTrue())
    {
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
}

const int GLOBAL_CONST_TRUE = 1; /* true */
void bad_9()
{
    int data;
    /* Initialize data */
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(GLOBAL_CONST_TRUE)
    {
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
}

int globalTrue = 1; /* true */
void bad_10()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(globalTrue)
    {
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
}

int globalReturnsTrue() 
{
    return 1;
}
void bad_11()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(globalReturnsTrue())
    {
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
}

int globalReturnsTrueOrFalse() 
{
    return (rand() % 2);
}

void bad_12()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(globalReturnsTrueOrFalse())
    {
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
}

const int GLOBAL_CONST_FIVE = 5; 
void bad_13()
{
    int data;
    /* Initialize data */
    data = -1;
    if(GLOBAL_CONST_FIVE == 5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(GLOBAL_CONST_FIVE == 5)
    {
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
}

int globalFive = 5; 
void bad_14()
{
    int data;
    /* Initialize data */
    data = -1;
    if(globalFive == 5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    if(globalFive == 5)
    {
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
}

void bad_15()
{
    int data;
    /* Initialize data */
    data = -1;
    switch(6)
    {
    case 6:
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        int buffer[10] = { 0 };

        if (data >= 0)
        {
            buffer[data] = 1;//SLIVER_SINK
            
        }
    }
        break;
    default:
        break;
    }
}

void bad_16()
{
    int data;
    /* Initialize data */
    data = -1;
    while(1)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    while(1)
    {
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
}

void bad_17()
{
    int data;
    /* Initialize data */
    data = -1;
    for(int i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    }
    for(int j = 0; j < 1; j++)
    {
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
}

void bad_18()
{
    int data;
    /* Initialize data */
    data = -1;
    goto source;
source:
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    goto sink;
sink:
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

static int badStatic = 0;
static void badSink_21(int data)
{
    if(badStatic)
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

void bad_21()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    badStatic = 1; /* true */
    badSink_21(data);
}

void bad_31()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    {
        int dataCopy = data;
        int data = dataCopy;
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
}

void bad_32()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    /* Initialize data */
    data = -1;
    {
        int data = *dataPtr1;
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);//SLIVER_SOURCE
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
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
}

typedef union
{
    int unionFirst;
    int unionSecond;
} union_34;


void bad_34()
{
    int data;
    union_34 myUnion;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
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
}

static void badSink_41(int data)
{
    
        int buffer[10] = { 0 };
        /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
        * This code does check to see if the array index is negative */
        if (data >= 0)
        {
            buffer[data] = 1;//SLIVER_SINK
            
        }
        
    
}

void bad_41()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    badSink_41(data);
}

static int badSource_42(int data)
{
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    return data;
}

void bad_42()
{
    int data;
    /* Initialize data */
    data = -1;
    data = badSource_42(data);
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

static void badSink_44(int data)
{
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

void bad_44()
{
    int data;
    /* define a function pointer */
    void (*funcPtr) (int) = badSink_44;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    /* use the function pointer */
    funcPtr(data);
}

static int badData_45;
static void badSink_45()
{
    int data = badData_45;
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

void bad_45()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);//SLIVER_SOURCE
    badData_45 = data;
    badSink_45();
}
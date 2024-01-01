/*
The Output should be k = 1.
Explanation: 
As we are finding the remainder of 10 by dividing it by 2, so there will be only two cases 
0 & 1. So case 0 & case 1 will be executed but as there is no break statement after those 
cases so this will execute case 5 also.
*/
#include <stdio.h>
void main()
{
    int k = 10;
    switch (k % 2)
    {
    case 0:
        k += 2;
    case 1:
        k = 0;
    case 5:
        k = 1;
    };
    printf("k= %d", k);
}

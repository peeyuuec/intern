#include <stdio.h>
#include<limits.h>
int main()
{ 
   
 int a = INT_MAX; //Max value for a uint16_t
 int b = 1;
int c = 2;

 int res = a;
res += b; //Overflow
//res -= c;
 printf("%d\n",res);
 
    return 0;
}

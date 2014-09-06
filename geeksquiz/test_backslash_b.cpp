#include<stdio.h>
struct st
{
    //int x;
    static int y;
};
 
int main()
{
    printf("%d", sizeof(struct st));
    return 0;
}

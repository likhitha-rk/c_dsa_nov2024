#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("\n even");
    }
    else{
        printf("\n odd");
    }
}
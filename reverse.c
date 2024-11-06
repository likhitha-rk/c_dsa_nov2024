#include<stdio.h>
int main(){
    int n=123;
    int rev=0;
    while(n!=0){
        int digit = n%10;
        rev=rev*10+ digit;
        n /=10;
    }
    printf("reversed number:%d\n",rev);
    return 0;
}
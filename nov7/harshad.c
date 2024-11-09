#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(temp%sum==0){
        printf("harshad");
    }
    else{
        printf("not a harshad");
    }
    
}
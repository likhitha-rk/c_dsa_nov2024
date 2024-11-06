#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<=10;i+=2){
        for(int j=0;j<=10;j+=2){
            for(int k=0;k<=10;k+=2){
                printf("%d %d %d",i,j,k);
            }
        }
    }
}
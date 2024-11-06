#include<stdio.h>
 static int a =3;
void add(){
    a++;
    printf("%d",a);
}
void sub(){
    printf("%d",a);
}
int main()
{
    add();
    add();
    sub();
}
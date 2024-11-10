#include<stdio.h>
struct student
{
   int rollno;
   float marks; 
};
int main()
{
    struct student s;
      s.rollno=2;
      s.marks=8.5;
      printf("%d ",s.rollno);
      printf("%f ",s.marks);
    
}


      
    

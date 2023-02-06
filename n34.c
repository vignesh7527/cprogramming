#include<stdio.h>
int main()
{
int a;
printf("ENTER SUBJECT 1 MARKS : ");
scanf("%d",&a);
int b;
printf("ENTER SUBJECT 2 MARKS : ");
scanf("%d",&b);
int c;
printf("ENTER SUBJECT 3 MARKS : ");
scanf("%d",&c);
int d;
printf("ENTER SUBJECT 4 MARKS : ");
scanf("%d",&d);
int e;
e=a+b+c+d;
int marks;
marks=e/4;
printf("TOTAL PERCENTAGE : %d", marks);
printf("                                                      ");
printf("                                                      ");
{
if(marks<40)
printf("FAIL");
else if(marks>=40 && marks<50)
printf("THIRD CLASS");
else if(marks>=50 && marks<60)
printf("SECOND CLASS");
else if(marks>=60 && marks<75)
printf("FIRST CLASS");
else if(marks>=75 && marks<100)
printf("DISTINATION");
}
   return 0;
}

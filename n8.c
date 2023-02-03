//reverse a number//
#include <stdio.h>]
int main(){
int Num, rev_Num = 0, remainder;
printf("Enter the number to reverse: ");
scanf("%d", &Num);    
while (Num != 0)
{
remainder = Num % 100;
rev_Num = rev_Num * 100 + remainder;
Num = Num/100;
}    
printf("The reversed number is: %d", rev_Num);
return 0;
} 

//valid or invalid//
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
int menu;
printf("Enter a Menu Option: ");
scanf("%d", &menu);
if( menu != 1)
{
printf("Invalid Entry!");
} else 
{
printf("Your Menu Option is: %d\n", menu);
}
return 0;
}

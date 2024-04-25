#include <stdio.h>

int main()
{
	 int    value;

        printf("What is the value? ");
        scanf("%d", &value);
	if (value < 10)
	{
		printf("\n Entered value is less than 10 \n");
	}
	else if(value > 10 && value <= 100)
	{	
		printf("\n Entered value is between 11 and 100 \n");
	}
	else
	{
		printf("\n Entered value is greater than 100 \n");
	}
        
	if (value % 2 == 0)
	{
		printf("Entered value is Even number \n");
	}
	else
	{
		printf("Entered value is Odd number \n");
	}
	return(0);
}

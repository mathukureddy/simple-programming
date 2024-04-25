#include <stdio.h>

int main()
{
	 int    i,value;

	for (i=0; i<5; i++)
	{
        	printf("What is the value? ");
        	scanf("%d", &value);
		if (value % 2 == 0)
		{	
			printf("Entered value is Even number \n");
		}
		else
		{
			printf("Entered value is Odd number \n");
		}
	}
	return(0);
}

#include <stdio.h>

int main()
{
	 int    i=1,value;

	while ( i<5)
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
		i++;
	}
	return(0);
}

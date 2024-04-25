#include <stdio.h>

int main()
{
	 int    i=0,value;

	do
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
	}while(i<2);
	return(0);
}

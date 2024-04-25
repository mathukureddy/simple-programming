#include <stdio.h>
//Main Method
int main()
{
 	int    value;

        printf("Enter the value? ");
	scanf("%d", &value);

	switch (value) {
		case 1: printf("Case 1 is Matched. Perform the Health Check. Insurance not taken \n");
			break;
		case 2: printf("Case 2 is Matched. Perform the Health Check. Insurnace is taken \n");
 			break;
		case 3: printf("Case 3 is Matched. Perform the Health Check. Insurance not needed \n"); 		
			break;
		default:printf("Health Check is not required. \n");
			break;
		}

	return(0);
}

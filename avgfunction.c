#include	<stdio.h>

float  average(int a, int b, int c);

float average(int a, int b, int c){
 
	int sum, avg;
	sum = a+b+c;
	avg = sum /3;
	return avg; 
}

int main()
{
	int	value1, value2, value3;
	float	result;

	printf("What is the first value? ");
	scanf("%d", &value1);

	printf("What is the second value? ");
	scanf("%d", &value2);
	printf("What is the third value? ");
	scanf("%d", &value3);

	result =average(value1,value2, value3);
       	
//	sum = value1 + value2 + value3;
//	average = sum / 3;
	printf("The average  of %d , %d, %d is %f\n", value1, value2, value3, result); 	
	return(0);
}


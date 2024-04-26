#include <stdio.h>
void func(int *b)
{
	*b = *b+5 ;
	printf("In func,  b = %d\n",  *b);
}

int main(void)
{
	int x = 5;
        int *y = &x;
	printf("In main,  before function x = %d\n", x );
	// Passing parameters
	func(y );
	printf("In main, x = %d\n", x );
	return 0;
}


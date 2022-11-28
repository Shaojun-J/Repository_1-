#include <stdio.h>

//int Test (int a);
void main (void)
{
	printf(" Hello world! \n");
	printf(" 1111 \n");
	printf(" 2222 \n");
	printf("321\n");

	int a,b,c;
	a = 1;
	b = 2;
	c = 3;
	printf("a=%d, b=%d, c=%d \n",a,b,c);
	b = Test(a);
	c += a;
	printf("a=%d, b=%d, c=%d \n",a,b,c);
	 
}

int Test (int a)
{
	return 2*(a+a);
}
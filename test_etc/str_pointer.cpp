#include <stdio.h>
#include <string.h>

char *test(char *x)
{
	char *y;
	char *z;
	printf("y function: %p change in function\n", y);
	printf("z function: %p change in function\n", z);
	y = x;
	z = y;
	printf("y function: %p change in function\n", y);
	printf("z function: %p change in function\n", z);
	printf("in function: %p change in function\n", ++x);
	return x;
}

void test2(char **x)
{
	printf("in2 function: %p\n", *x);
	printf("in2 function: %p\n", ++(*x));
}

int main ()
{
	char *str = "Sirawit";
	
//	str++;
//	str++;
//	str++;
//	printf("%c", str[-3]);
	

	printf("out function: %p\n", str);
	
	printf("--------------------\n");
	
	test(str);
	printf("out function: %p nothing change\n ", str);
	
	printf("--------------------\n");
	
//	str = test(str);
	printf("out function: %p change when return\n ", str);
	
	printf("--------------------\n");
	
//	test2(&str);
	printf("out function: %p change from parameter\n ", str);
}

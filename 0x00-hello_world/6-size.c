#include <stdio.h>

/**
  *main - uses sizeof
  *Return : returns 0
  */
int main(void)
{
 	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Sizeof an int: %d byte(s)\n", sizeof(b));
	print("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n" ,sizeof(e));

	return (0);
}

#include <stdio.h>
int main (void)
{
	char charType;
	int intergerType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	printf("Size of a char: ",sizeof(charType));
	printf("Size of an int: ",sizeof(intType));
	printf("Size of a long int: ",sizeof(longintType));
	printf("Size of a long long int: ",sizeof(longlongintType));
	printf("Size of a float: ",sizeof(floatType));
	return (0);
}

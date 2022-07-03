#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: Always 0 if excited properly. non-zero otherwise
 */
int main(void)
{
int i;
long int l;
long long int ll;
float d;
char c;
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(l));
printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
printf("Size of a float: %ld byte(s)\n", sizeof(d));
return (0);
}

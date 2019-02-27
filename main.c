#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int main()
{
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	int (*func_ptr[6])(int,int) ;
	func_ptr[(int)'+'-42] = plus ;
	func_ptr[(int)'-'-42] = minus ;
	func_ptr[(int)'*'-42] = multiply ;
	func_ptr[(int)'/'-42] = divided ; 
	printf("%d %c %d = %d\n", a, b, c, (*func_ptr[(int)b-42])(a,c)) ;
}

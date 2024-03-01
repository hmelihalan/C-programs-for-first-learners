#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a = 3, b = 4;  
	int *g1,*g2,*con;

	g1 = &a;
	g2 = &b;

	printf("%d\n%d\n", *g1, *g2);

	con=g2;
	g2 = g1;
	g1 = con;

	printf("%d\n%d", *g1, *g2);

	




	return 0;
}

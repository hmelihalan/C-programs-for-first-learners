#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a = 3,b = 4;
	int *ag;

	ag =&b;
	a = *ag;
	ag =&a;
	printf("%d", *ag);





	return 0;
}

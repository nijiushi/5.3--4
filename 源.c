#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void exchange(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 3;
	int b = 6;
	exchange(&a, &b);
	printf("a=%d  b=%d", a, b);
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"head.h"
int main()
{
	int a = 5, b = 6;
	int* p1, * p2;
	p1 = &a, p2 = &b;
	printf("a=%d,b=%d\n", a, b);
	if (a < b)
	{
		swap(p1, p2);
	}
	printf("a=%d,b=%d\n", a, b);
	printf("PI=%f", PI);
}
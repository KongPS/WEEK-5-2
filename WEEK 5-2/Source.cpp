#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	int sum;
	scanf_s("%d%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f, g, h, i, j);
	sum = (a + b + c + d + e + f + g + h + i + j) / 10;
	printf("%d", sum);
}
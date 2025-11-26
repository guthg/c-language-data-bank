#include <stdio.h>

void divisor(int a, int b)//计算最大公约数
{
	int c = a % b;

	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	
}

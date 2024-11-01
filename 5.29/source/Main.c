#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b,c,i,lcm=1;
	printf("請輸入兩個數字\n");
	scanf_s("%d %d", &a, &b);
	
	if (a <= b)
		c = a;
	else
		c = b;

	for (i = 2;i <= c;i++)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			a = a / i;
			b = b / i;
			lcm = lcm * i;
			continue;
		}		
	}
	printf("最小公倍數\n%d",lcm*a*b);
	system("pause");
}
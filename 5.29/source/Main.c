#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b,c,i,lcm=1;
	printf("�п�J��ӼƦr\n");
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
	printf("�̤p������\n%d",lcm*a*b);
	system("pause");
}
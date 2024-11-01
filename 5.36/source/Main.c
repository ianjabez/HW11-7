#include <stdio.h>
#include <stdlib.h>

int moved = 0;

int main() 
{
	int n;
	
	printf("�п�J�L�l���ƶq�G");
	scanf_s("%d", &n);

	hanoi(n, 1, 2, 3);

	printf("\n%d�ӽL�l �`�@���ʤF%d��\n\n",n, moved);

	system("pause");
	return 0;
}

void hanoi(int n, int a, int b, int c)
{
	if (n == 1) 
	{
		printf("��%d��:\t%d ---> %d\n",moved, a, c);
		moved++;
	}
	else
	{
		hanoi(n - 1, a, c, b);
		hanoi(1, a, b, c);
		hanoi(n - 1, b, a, c);
	}
}
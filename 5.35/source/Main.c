#include <stdio.h>
#include <stdlib.h>

unsigned long long int fib();
int main()
{
	unsigned int n;
	unsigned long long int z;
	unsigned long  int x;
	unsigned int q;
	printf("��J�Q�ݪ���N�Ӽ� : ");
	scanf_s("%u",&n);

	printf("\n\n(a)��N��Fibonacci�� : %llu\n\n", fib(n));
	//printf("(b)�̤j Fibonacci�� : %u\n\n", fib(UINT_MAX));
	//printf("�̤j�̤j�Ʀr%llu\n\n", ULLONG_MAX);

	printf("%d\n", sizeof(n));
	printf("%d\n", sizeof(z));
	printf("%d\n", sizeof(x));
	printf("%d\n", sizeof(q));
	system("pause");
	return 0;
}
unsigned long long int fib(unsigned int n)
{
	unsigned int i, remind[2] = {0,1},num=0;
	for (i = 1;i <n;i++)
	{ 
		//num = 0;
		num = remind[0] + remind[1];
		remind[0] = remind[1];
		remind[1] =num;
		
	}	
	//printf("%d", remind[0]);
	return (remind[0]);
}
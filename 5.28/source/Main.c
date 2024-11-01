#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char input,output;
	
	printf("請輸入字元\n");
	scanf_s("%c", &input);

	output = input + 32;
	printf("小寫字母為\n%c", output);


}
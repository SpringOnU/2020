#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int climbStairs(int n) {
	int num1 = 1;
	int num2 = 2;
	int tep = 0;
	if (n <= 2)
	{
		return n;
	}
	else
	{
		for (int i = 2; i < n; i++)//�ӵ����ʼ�� ��i����ڵ�i-1��ӵ�i-2��
		{
			tep = num1 + num2;
			num1 = num2;
			num2 = tep;
		}
		return tep;
	}
}
int main()
{
	int n = 0;
	printf("������һ����������");
	scanf("%d", &n);
	int a = climbStairs(n);
	printf("%d\n", a);
	return 0;
}


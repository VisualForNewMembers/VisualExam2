#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
int main()
{
	printf("请输入格式为<自然数><判断符号><自然数><英文分号>的字符串：\n");
	char a[100];
	scanf("%s", a);
	int i = 0;

	if (a[i] <= '9' && a[i] >= '0')
		for (i = 0; a[i] <= '9' && a[i] >= '0'; i++)
		{
			if (a[i] > '9' || a[i] < '0')
			{
				printf("语法错误，在%c之后有问题", a[i]);
				return 0;
			}
		}
	else
	{
		printf("语法错误，在 %d列之后有问题", i);
		return 0;
	}

	if (a[i] >= '<' && a[i] <= '>' && a[i + 1] != '<' && a[i + 1] != '>' || a[i + 1] == '=')
		i = i + 2;
	else
	{
		printf("语法错误，在%d列之后有问题", i);
		return 0;
	}

	if (a[i] <= '9' && a[i] >= '0' || a[i - 1] <= '9' && a[i - 1] >= '0')
		for (i; a[i] <= '9' && a[i] >= '0'; i++)
		{
			if (a[i] > '9' || a[i] < '0')
			{
				printf("语法错误，在%d列之后有问题", i);
				return 0;
			}
		}
	else
	{
		printf("语法错误，在%d列之后有问题", i);
		return 0;
	}

	if (a[i] == ';' || a[i + 2] == ';' || a[i + 3] == ';')
		printf("语法正确");
	else
	{
		printf("语法错误，在%d列之后有问题", i);
		system("pause");
		return 0;
	}

}
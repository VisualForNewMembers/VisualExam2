#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
int main()
{
	printf("�������ʽΪ<��Ȼ��><�жϷ���><��Ȼ��><Ӣ�ķֺ�>���ַ�����\n");
	char a[100];
	scanf("%s", a);
	int i = 0;

	if (a[i] <= '9' && a[i] >= '0')
		for (i = 0; a[i] <= '9' && a[i] >= '0'; i++)
		{
			if (a[i] > '9' || a[i] < '0')
			{
				printf("�﷨������%c֮��������", a[i]);
				return 0;
			}
		}
	else
	{
		printf("�﷨������ %d��֮��������", i);
		return 0;
	}

	if (a[i] >= '<' && a[i] <= '>' && a[i + 1] != '<' && a[i + 1] != '>' || a[i + 1] == '=')
		i = i + 2;
	else
	{
		printf("�﷨������%d��֮��������", i);
		return 0;
	}

	if (a[i] <= '9' && a[i] >= '0' || a[i - 1] <= '9' && a[i - 1] >= '0')
		for (i; a[i] <= '9' && a[i] >= '0'; i++)
		{
			if (a[i] > '9' || a[i] < '0')
			{
				printf("�﷨������%d��֮��������", i);
				return 0;
			}
		}
	else
	{
		printf("�﷨������%d��֮��������", i);
		return 0;
	}

	if (a[i] == ';' || a[i + 2] == ';' || a[i + 3] == ';')
		printf("�﷨��ȷ");
	else
	{
		printf("�﷨������%d��֮��������", i);
		system("pause");
		return 0;
	}

}
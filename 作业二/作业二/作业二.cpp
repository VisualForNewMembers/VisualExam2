#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[50];
	int i, j;
	int k=0;
	scanf("%s", &a);
	j = int(strlen(a));
	for (i = 0; i < j + 1; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			continue;
		else if (a[i] >= '<' && a[i] <= '>')
			k = i;
		else if(i==k+1 && a[i] =='=')
			continue;
		else if (a[i] == ';' && a[i + 1] == '\0')
		{
			printf("�﷨��ȷ");
			break;
		}
		else
		{
			printf("�﷨�����ڵ�%d��", i + 1);
			break;
		}
	}
	system("pause");
	return 0;
}
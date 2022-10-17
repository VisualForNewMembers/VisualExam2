#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char abc[20]={0};
	char bcd[20]={0};
	char jkl[20]={0};
	scanf("%s", abc);
	printf("%s\n", abc);
	int i;
	for (i = 0; i <= 20; i++)
	{
		if (abc[i] < 60)
			continue;
		else if (abc[i] >63)
			continue;
		else if (60 <= abc[i] && abc[i] < 63)
		{
			printf("%c\n", abc[i]);
			printf("%d\n", abc[i]);
			break;
		}
	}
	for (int j = 0; j < i; j++)
	{
		bcd[j] = abc[j];
	}
	for (int j = 0; j <= (strlen(abc) - i-1); j++)
	{
		jkl[j] = abc[i+j+1];
	}
	int a = strcmp(bcd, jkl);
	if (60 <= abc[i + 1] && abc[i + 1] < 63)
	{
		if (abc[i] == 60)
		{
			if (abc[i + 1] = 60)
				printf("\033[40;31m语法错误1\033[0m\n");
			else if (abc[i + 1] = 61)
			{
				if (a == -1||a == 0)
					printf("\033[40;32m语法正确\033[0m\n");
				else
					printf("\033[40;31m语法错误2\033[0m\n");

			}
			else if (abc[i + 1] = 62)
				printf("\033[40;31m语法错误3\033[0m\n");
		}
		if (abc[i] == 61)
		{
			if (abc[i + 1] = 61)
				printf("\033[40;31m语法错误4\033[0m\n");
			else if (abc[i + 1] = 60)
				printf("\033[40;31m语法错误5\033[0m\n");
			else if (abc[i + 1] = 62)
			{
				if (a == 1 || a == 0)
					printf("\033[40;32m语法正确033[0m\n");
				else
					printf("\033[40;31m语法错误6\033[0m\n");
			}

		}
		if (abc[i] == 62)
		{
			printf("\033[40;31m语法错误7\033[0m\n");
		}
	}
	else
	{
		if (abc[i] == 60)
		{
			if (a == -1)
			{
				printf("\033[40;32m语法正确\033[0m\n");
			}
			else
			{
				printf("\033[40;31m语法错误8\033[0m\n");
			}
		}
		else if (abc[i] == 61)
		{
			if (a == 0)
			{
				printf("\033[40;32m语法正确\033[0m\n");
			}
			else
			{
				printf("\033[40;31m语法错误9\033[0m\n");
			}

		}
		else if (abc[i] == 62)
		{
			if (a == 1)
			{
				printf("\033[40;32m语法正确\033[0m\n");
			}
			else
				printf("\033[40;31m语法错误10\033[0m\n");
		}
	}
	system ("pause");
	return 0;
}
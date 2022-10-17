#include<stdio.h>
#include<cstdio>
#include<ctype.h> 
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main(void)
{
	char i;
	char str[6];
	printf("请按照<自然数><判断符号><自然数><英文分号> 输入\n注意不要超过5个字符。\n");

	scanf_s("%s", str, 6);
	printf("%s\n", str);

	if (strlen((str)) == 5)
	{
		for (i = 0; i < 1; i++)
		{

			if (isdigit(*(str)) && (*(str + 1)) == '>' || (*(str + 1)) == '<' || (*(str + 1)) == '=' && (*(str + 2)) == '<' || (*(str + 2)) == '>' || (*(str + 2)) == '=' && isdigit(*(str + 3)) && (*(str + 4)) == ';')
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
				printf("\033[1m语法正确\033\n");
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
				printf("\033[1m语法错误\033");
				if (!isdigit(*(str)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("，第1个字符错误");
				}
				if (!((*(str + 1)) == '>' || (*(str + 1)) == '<' || (*(str + 1)) == '='))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("，第2个字符错误");
				}
				if (!((*(str + 2)) == '<' || (*(str + 2)) == '>' || (*(str + 2)) == '='))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",第3个字符错误");
				}
				if (!isdigit(*(str + 3)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",第4个字符错误");
				}
				if (!((*(str + 4)) == ';'))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",第5个字符错误");
				}
				putchar('\n');
			}

		}
	}

	if ((strlen(str)) == 4)
	{
		for (i = 0; i < 1; i++)
		{

			if (isdigit(*(str)) && (*(str + 1)) == '>' || (*(str + 1)) == '<' || (*(str + 1)) == '=' && (*(str + 2)) == '<' || (*(str + 2)) == '>' || (*(str + 2)) == '=' && isdigit(*(str + 3)) && (*(str + 4)) == ';')
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
				printf("\033[1m语法正确\033\n");
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
				printf("\033[1m语法错误\033");

				if (!isdigit(*(str)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("，第1个字符错误");
				}
				if (!((*(str + 1)) == '>' || (*(str + 1)) == '<' || (*(str + 1)) == '='))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("，第2个字符错误");
				}

				if (!isdigit(*(str + 3)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",第3个字符错误");
				}
				if (!((*(str + 3)) == ';'))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",第4个字符错误");
				}
				putchar('\n');
			}

		}
	}


	putchar('\n');
	return 0;
}
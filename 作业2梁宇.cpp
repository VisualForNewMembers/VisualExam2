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
	printf("�밴��<��Ȼ��><�жϷ���><��Ȼ��><Ӣ�ķֺ�> ����\nע�ⲻҪ����5���ַ���\n");

	scanf_s("%s", str, 6);
	printf("%s\n", str);

	if (strlen((str)) == 5)
	{
		for (i = 0; i < 1; i++)
		{

			if (isdigit(*(str)) && (*(str + 1)) == '>' || (*(str + 1)) == '<' || (*(str + 1)) == '=' && (*(str + 2)) == '<' || (*(str + 2)) == '>' || (*(str + 2)) == '=' && isdigit(*(str + 3)) && (*(str + 4)) == ';')
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
				printf("\033[1m�﷨��ȷ\033\n");
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
				printf("\033[1m�﷨����\033");
				if (!isdigit(*(str)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("����1���ַ�����");
				}
				if (!((*(str + 1)) == '>' || (*(str + 1)) == '<' || (*(str + 1)) == '='))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("����2���ַ�����");
				}
				if (!((*(str + 2)) == '<' || (*(str + 2)) == '>' || (*(str + 2)) == '='))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",��3���ַ�����");
				}
				if (!isdigit(*(str + 3)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",��4���ַ�����");
				}
				if (!((*(str + 4)) == ';'))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",��5���ַ�����");
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
				printf("\033[1m�﷨��ȷ\033\n");
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
				printf("\033[1m�﷨����\033");

				if (!isdigit(*(str)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("����1���ַ�����");
				}
				if (!((*(str + 1)) == '>' || (*(str + 1)) == '<' || (*(str + 1)) == '='))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf("����2���ַ�����");
				}

				if (!isdigit(*(str + 3)))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",��3���ַ�����");
				}
				if (!((*(str + 3)) == ';'))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
					printf(",��4���ַ�����");
				}
				putchar('\n');
			}

		}
	}


	putchar('\n');
	return 0;
}
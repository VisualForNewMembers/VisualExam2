#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请按照<自然数><判断符号><自然数><英文分号>的格式来输入字符串：");
	char str[50];
	scanf("%s", str);
	int i = 0;

	///第一部分

	if(str[i] <= '9' && str[i] >= '0')
	for (i = 0; str[i] <= '9' && str[i] >= '0'; i++)
	{
		if (str[i] > '9' || str[i] < '0')
		{
			printf("语法错误，在%c之后有问题", str[i]);
			return 0;
		}
	}
	else
	{
		printf("语法错误，在 % c之后有问题", str[i]);
		return 0;
	}

	/// 第二部分

	if (str[i]>='<'&&str[i]<='>'&&str[i+1]!='<'&&str[i+1]!='>'||str[i + 1] == '=')
		i=i+2;
	else 
	{
		printf("语法错误，在%c之后有问题", str[i]);
		return 0;
	}

	/// 第三部分

	if (str[i] <= '9' && str[i] >= '0' || str[i-1] <= '9' && str[i-1] >= '0')
		for (i; str[i] <= '9' && str[i] >= '0'; i++)
		{
			if (str[i] > '9' || str[i] < '0')
			{
				printf("语法错误，在%c之后有问题", str[i]);
				return 0;
			}
		}
	else
	{
		printf("语法错误，在%c之后有问题", str[i]);
		return 0;
	}

	/// 第四部分

	if (str[i] == ';' || str[i + 2] == ';'||str[i+3]==';')
		printf("语法正确:%s", str);
	else 
	{
		printf("语法错误，在%c之后有问题", str[i]);
		return 0;
	}




}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("�밴��<��Ȼ��><�жϷ���><��Ȼ��><Ӣ�ķֺ�>�ĸ�ʽ�������ַ�����");
	char str[50];
	scanf("%s", str);
	int i = 0;

	///��һ����

	if(str[i] <= '9' && str[i] >= '0')
	for (i = 0; str[i] <= '9' && str[i] >= '0'; i++)
	{
		if (str[i] > '9' || str[i] < '0')
		{
			printf("�﷨������%c֮��������", str[i]);
			return 0;
		}
	}
	else
	{
		printf("�﷨������ % c֮��������", str[i]);
		return 0;
	}

	/// �ڶ�����

	if (str[i]>='<'&&str[i]<='>'&&str[i+1]!='<'&&str[i+1]!='>'||str[i + 1] == '=')
		i=i+2;
	else 
	{
		printf("�﷨������%c֮��������", str[i]);
		return 0;
	}

	/// ��������

	if (str[i] <= '9' && str[i] >= '0' || str[i-1] <= '9' && str[i-1] >= '0')
		for (i; str[i] <= '9' && str[i] >= '0'; i++)
		{
			if (str[i] > '9' || str[i] < '0')
			{
				printf("�﷨������%c֮��������", str[i]);
				return 0;
			}
		}
	else
	{
		printf("�﷨������%c֮��������", str[i]);
		return 0;
	}

	/// ���Ĳ���

	if (str[i] == ';' || str[i + 2] == ';'||str[i+3]==';')
		printf("�﷨��ȷ:%s", str);
	else 
	{
		printf("�﷨������%c֮��������", str[i]);
		return 0;
	}




}
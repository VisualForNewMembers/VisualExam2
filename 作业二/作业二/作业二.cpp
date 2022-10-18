#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[50];
	int i, j, l = 0;
	int k=0;
	scanf("%s", &a);
	j = int(strlen(a));
	for (i = 0; i < j + 1; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			continue;
		else if (l==0 &&  a[i] >= '<' && a[i] <= '>')
		{
			k = i;
			l++;
		}
		else if(l==1 && i==k+1 && a[i] =='=')
			continue;
		else if (a[i] == ';' && a[i + 1] == '\0')
		{
			printf("语法正确");
			break;
		}
		else
		{
			printf("语法错误，在第%d列", i + 1);
			break;
		}
	}
	system("pause");
	return 0;
}

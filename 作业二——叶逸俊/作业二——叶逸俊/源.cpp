#define _CRT_SECURE_NO_WARNINGS 2
#include <string.h>
#include <stdio.h>
int main()
{
	char arr[100];
	scanf("%s", arr);
	int a, b, c; int d = 0, e = 0, f = 0,g=0;
	a = int(strlen(arr));
	for (b = 0; b<a; b++)
	{
		if (arr[b] >= 48 && arr[b] <= 57);
		else
		{
			c = b;
			if (c == 0)
				break;
			else
				if (d == 0 && arr[c] >= 60 && arr[c] <= 62)
				{
					e = c + 1;
					d++; continue;
				}
				else
					if (d == 1 && c == e && arr[c] == '=')
					{
						f = e + 1;
						if (arr[f] >= 48 && arr[f] <= 57)
							continue;
						else
							break;
					}
					else 
						if(arr[c]=';'&&arr[c-1]>=48&&arr[c-1]<=57)
						{	
								printf("语法正确"); g = 100; break;
						}
						else
							break;
		}		   
	}
	if (g == 100);
	else
	printf("语法错误，错误位置在第%d列", b + 1);
	return 0;
}
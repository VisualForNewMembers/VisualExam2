#include <stdio.h>
#include <string.h>

int main()

{
	int i = 0;
	int z = 0;
	int j = 0;
	int q = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int f = 0;
	char arr[80];

	fgets(arr, sizeof(arr), stdin);

	

	
	for (i; i < 10; i++)
	{
		if(48<=arr[i]&&arr[i]< 58)
		{
			a++;
			
		   if (arr[i+1] >= 58 || arr[i+1] < 48)
		   {
			   for (z = i; z + i <= 20; z++)
			   {
				   if (arr[z + 1] == 60 || arr[z + 1] == 61 || arr[z + 1] == 62)
				   {
					   b++;
					  
					   
					   if (arr[z + 2] == 61)
					   {
						   c++;

						   for (j = z + 3; j + z <= 22; j++)
						   {
							   if (48 <= arr[j] && arr[j] < 58)
							   {
								   d++;
								   for (q = j + 1; q < j + 2; q++)
								   {
									   f++;
									   if (arr[q] == 59)
									   {
										   printf("语法正确\n");
										   goto agian;
									   }
								   }
							   }
						   }

					   }
					   else if(arr[z + 2] >= 58 || arr[z + 2] < 48)
					   {
						   c++;

						   for (j = z + 3; j + z <= 22; j++)
						   {
							   if (48 <= arr[j] && arr[j] < 58)
							   {
								   d++;
								   for (q = j + 1; q < j + 2; q++)
								   {
									   f++;
									   if (arr[q] == 59)
									   {
										   printf("语法错误,运算符出错\n");
										   goto agian;
									   }
								   }
							   }
						   }
					 
					   }
					   else if (48 <= arr[i] && arr[i] < 58)
					   {
						   c++;

						   for (j = z + 3; j + z <= 22; j++)
						   {
							   
							   
								   d++;
								   for (q = j ; q < j + 2; q++)
								   {
									   f++;
									   if (arr[q] == 59)
									   {
										   printf("语法正确\n");
										   goto agian;
									   }
								   }
							   
						   }
					   }
				   }


			   }
		   }
		}
	
		
	}
	if (a == 0 || b != 2 || c != 1 || d == 0||f!=1)
	{
		printf("语法错误,");
		while (1)
		{
			if (a == 0)
			{
				printf("不是自然数开头");
				break;
			}
			
			if (b != 2)
			{
				printf("运算符错误");
				break;
			}
			if (c != 1)
			{
				printf("运算符错误");
				break;
			}
			if (d==0)
			{
				printf("未添加自然数");
				break;
			}
			if (f != 1)
			{
				printf("分号处错误");
				break;
			}
		}
	}
	agian:
	return 0;
   
}



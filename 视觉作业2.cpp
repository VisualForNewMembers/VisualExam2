#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int judge = 0;
int check1(string str, int length);//判断< > 
int check2(string str, int length);//判断英文分号
int check3(string str, int length);//判断<= >=
int main()
{
	cout << "输入一个字符串：" << endl;
	string str;
	cin >> str;
	int a, b, c, length;
	length = str.length();
	a = check1(str, length);
	b = check2(str, length);
	c = check3(str, length);
	if (a && b && c)
	{
		cout << "语法正确" << endl;
	}
	system("pause");
	return 0;
}
int check1(string str, int length)
{
	int sign=1;
	int f = 0;
	for (int i = 0;i < length-1;i++)
	{
		if (str[i] == 60 || str[i] == 62)
		{
			f = i;
			for (int j = f - 1;j >= 0;j--)
			{
				if (!(isdigit(str[j]))) { cout << "语法错误，在第" << j + 1 << "列" << endl; sign = 0; }
			}
			for (int k = f + 1;k < length-1;k++)
			{
				if (!(isdigit(str[k]))) { cout << "语法错误，在第" << k + 1 << "列" << endl; sign = 0; }
			}
		}
		else if (str[i] == 61)
		{
			if (str[i + 1] == 61)
			{
				for (int j = i - 1;j >= 0;j--)
				{
					if (!(isdigit(str[j]))) { cout << "语法错误，在第" << j + 1 << "列" << endl; sign = 0; }
				}
				for (int k = i + 2;k < length - 1;k++)
				{
					if (!(isdigit(str[k]))) { cout << "语法错误，在第" << k + 1 << "列" << endl; sign = 0; }
				}
			}
			else
			{
				cout << "语法错误，在第" << i + 1 << "列" << endl; sign = 0; 
			}
		}
	}
	return sign;
}
int check2(string str, int length)
{
	int sign = 1;
	if (str[length - 1] != 59) { cout << "语法错误，在第" << length << "列" << endl; sign = 0; }
	return sign;
}
int check3(string str, int length)
{
	int sign = 1;
	int g,h;
	for (int i = 0;i < length - 1;i++)
	{
		if (str[i] == 60 && str[i + 1] == 61)
		{
			
			g = i;judge = 0;
			for (int j = g - 1;j >= 0;j--)
			{
				if (!(isdigit(str[j]))) { cout << "语法错误，在第" << j + 1 << "列" << endl; sign = 0; };
			}
			for (int k = g + 2;k < length - 1;k++)
			{
				if (!(isdigit(str[k]))) { cout << "语法错误，在第" << k + 1 << "列" << endl; sign = 0; };
			}
		}
		else if (str[i] == 62 && str[i + 1] == 61)
		{
			h = i;judge = 0;
			for (int j = h - 1;j >= 0;j--)
			{
				if (!(isdigit(str[j]))) { cout << "语法错误，在第" << j + 1 << "列" << endl; sign = 0; }
			}
			for (int k = h + 2;k < length - 1;k++)
			{
				if (!(isdigit(str[k]))) { cout << "语法错误，在第" << k + 1 << "列" << endl; sign = 0; }
			}
		}
		return sign;
	}
}
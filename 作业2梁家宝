#include<iostream>
using namespace std;
#include<string>
int first(string A, int len)
{
	int a = 0;
	for (int i = 0; i < len; i++)
	{
		if (A[i]=='<'||A[i]=='>')
		{
			if(A[i+1] == '<' || A[i+1] == '>'){return i;}
			else {return 0;}
		}
		else if (A[i] == '=')
		{
			if (A[i + 1] != '=') { return i; }
			else { return 0; }
		}
	}
	return 0;
}

int second(string A, int len)
{
	if (A[len-1] == ';')
	{
		return 0;
	}
	return 1;
}

int third(string A, int len)
{
	int a = 0;
	for (int i = 0; i < len; i++)
	{
		if (A[i] == '<' || A[i] == '>' || A[i] == '=')
		{
			a = i; break;
		}
	}
	for (int j = a + 2; j < len; j++)
	{
		if (A[j] == '<' || A[j] == '>' || A[j] == '=')
		{
			return j;
		}
	}
	return 0;
}

int extre(string A, int len)
{
	for (int i = 0; i < len; i++)
	{
		if(A[i] == '<' || A[i] == '>'|| A[i] == '=')
		{
			return i;
		}
	}
}

int main()
{
	string A;
	string B = "\"";
	cin >> A;
	int len = A.size();
	int a = first(A, len);
	int b = second(A, len);

	if (a !=0||b !=0)
	{
		cout << "语法错误，在语句"<< B;
		if(a != 0)
		{
			for (int i = 0; i < a+1; i++)
			{
				cout << A[i];
			}
		}
		else 
		{
			for (int i = 0; i < len; i++)
			{
				cout << A[i];
			}
		}
		cout << B << "的后面" << endl;
	}
	else
	{
		int c = third(A, len);
		int d = extre(A, len);
		if ((len-1-d) == 1)
		{
			cout << "语法错误，在语句" << B;
			for (int i = 0; i < d+1; i++)
			{
				cout << A[i];
			}
			cout << B << "的后面" << endl;
		}
		else if(c != 0)
		{
			cout << "语法错误，在语句" << B; 
			for (int i = 0; i < c; i++)
			{
				cout << A[i];
			}
			cout << B << "的后面" << endl;
		}
		else { cout << "语法正确" << endl; }
	}

	system("pause");

	return  0;
}

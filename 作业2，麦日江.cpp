#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "请输入一个字符串" << endl;
	cout << "<自然数><判断符号><自然数><英文分号> " << endl;
	string a;
	int i;
	cin>>a;
	for(i=0;i<a.size();i++)
	{
	    if((a[i]=='<'&&a[i+1]=='=')||(a[i]=='>'&&a[i+1]=='='))
	    {
	    	cout<<"语法正确"<<endl; 
		}
		else if((a[i]=='<'&&(a[i+1]=='<'||a[i+1]=='>'))||(a[i]=='>'&&(a[i+1]=='<'||a[i+1]=='>')))
		{
			cout<<"语法错误,在第"<<i+2<<"列"<<endl; 
		}
		else if((a[i]=='<'||a[i]=='>')&&(a[i+1]=='<'||a[i+1]=='>'))
        {
        	cout<<"语法错误，在第"<<i+2<<"列"<<endl;
		}
		else if(a[i]=='='&&a[i+1]=='=')
		{
			cout<<"语法正确"<<endl; 
		}
		else if(a[i]=='='&&(a[i+1]=='<'||a[i+1]=='>'))
		{
			cout<<"语法错误,在第"<<i+2<<"列"<<endl; 
		}
    }
    system("pause");
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "������һ���ַ���" << endl;
	cout << "<��Ȼ��><�жϷ���><��Ȼ��><Ӣ�ķֺ�> " << endl;
	string a;
	int i;
	cin>>a;
	for(i=0;i<a.size();i++)
	{
	    if((a[i]=='<'&&a[i+1]=='=')||(a[i]=='>'&&a[i+1]=='='))
	    {
	    	cout<<"�﷨��ȷ"<<endl; 
		}
		else if((a[i]=='<'&&(a[i+1]=='<'||a[i+1]=='>'))||(a[i]=='>'&&(a[i+1]=='<'||a[i+1]=='>')))
		{
			cout<<"�﷨����,�ڵ�"<<i+2<<"��"<<endl; 
		}
		else if((a[i]=='<'||a[i]=='>')&&(a[i+1]=='<'||a[i+1]=='>'))
        {
        	cout<<"�﷨�����ڵ�"<<i+2<<"��"<<endl;
		}
		else if(a[i]=='='&&a[i+1]=='=')
		{
			cout<<"�﷨��ȷ"<<endl; 
		}
		else if(a[i]=='='&&(a[i+1]=='<'||a[i+1]=='>'))
		{
			cout<<"�﷨����,�ڵ�"<<i+2<<"��"<<endl; 
		}
    }
    system("pause");
    return 0;
}

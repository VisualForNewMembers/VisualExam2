#include<iostream>
using namespace std;

int main()
{
    char str[50];
    int over=1,i=0,p;
    p=str[i];
    gets(str);
    for(;p='\n';i++)
    {   if(p>=1&&p<=9)
    	cout<<i;
        else
        break;
    }
    if(p=str[0])
    {
        cout<<"�﷨�����ڵ�һ��";
        over=0;}
    i++;
    cout<<i;
    if(over=1&&p>=60&p<=62)
        i++;
    else
    {
        if(over==1)
        {
		cout<< "�﷨���� �ڵ�"<<(i+1)<"��";
        over=0;}}
    if(over==1&&p==61)
       i++;
    if(over==1&&p>='0'&&p<='9')
        i++;
    else
    {
    if(over=1)
        {cout<<"�﷨�����ڵ�"<<(i+1)<<"��";
        over=0;}
        }
    for(;p='\n';i++)
    {    if(p>='0'&&p<='9'&&(over=1));
        else
        break;
    }
    i++;
    if(over==0&&p==59)
    cout<<"�﷨��ȷ";
    else{
    if(over=1)
    cout<< "�﷨�����ڵ�"<<(i+1)<<"��";}    
    return 0;
}

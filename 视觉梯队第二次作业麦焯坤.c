#include<stdio.h>
#include<windows.h>
int main()
{   system("color 02");
	char arry1[]={48,49,50,51,52,53,54,55,56,57,60,61,62,59};
	char arry2[]={0};
	int a,b=0,c=0,i,j;
	float t=0;
	printf("������һ���ַ���");
	
	scanf("%s",arry2);
	a=strlen(arry2);
	for(i=0;i<a;i++){
		for(j=0;j<14;j++){
			if(arry2[i]==arry1[j])
			{
				b++;
			}
		}
	}
	if(a>b){
		printf("�﷨�����ַ������Ϲ淶");
		c++;                                 //������ַ�arry2����û��
	}
	if(arry2[a-1]!=arry1[13]){
		printf("�﷨����û����;��β"); 
		c++;                                       //�ж�;�Ƿ�Ϊ��β 
	}
	 for(i=0;i<a;i++){
   	if(arry2[i]==60){
   		t=t+0.75;
	   } 
	if(arry2[i]==62)   {
		t=t+0.75;
	}
	if(arry1[i]==61)   {
		t=t+0.5;
	}
   } 
  if(t>1.250000){
  	printf("�﷨���� ���ȽϷ��Ŵ���");
  	c++; 
  }
  if(t==0){
  		printf("�﷨���� ��������ȽϷ���");
  		c++;
  } 
  for(i=0;i<a;i++){
  	if(arry2[i]==61){
  		if(arry2[i+1]==60||arry2[i+1]==62){
  			printf("�﷨���󣬱ȽϷ��Ŵ��� ");
			  c++;                                    //�жϱȽ�Ԥ����Ƿ�ʹ����ȷ 
		  }
	  }
  }
  	if(c==0){
		printf("�﷨��ȷ"); 
	}
	
	return 0;
}

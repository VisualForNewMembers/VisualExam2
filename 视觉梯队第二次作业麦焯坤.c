#include<stdio.h>
#include<windows.h>
int main()
{   system("color 02");
	char arry1[]={48,49,50,51,52,53,54,55,56,57,60,61,62,59};
	char arry2[]={0};
	int a,b=0,c=0,i,j;
	float t=0;
	printf("请输入一段字符串");
	
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
		printf("语法错误，字符不符合规范");
		c++;                                 //输入的字符arry2中有没有
	}
	if(arry2[a-1]!=arry1[13]){
		printf("语法错误，没有以;结尾"); 
		c++;                                       //判断;是否为结尾 
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
  	printf("语法错误 ，比较符号错误");
  	c++; 
  }
  if(t==0){
  		printf("语法错误 ，请输入比较符号");
  		c++;
  } 
  for(i=0;i<a;i++){
  	if(arry2[i]==61){
  		if(arry2[i+1]==60||arry2[i+1]==62){
  			printf("语法错误，比较符号错误 ");
			  c++;                                    //判断比较预算符是否使用正确 
		  }
	  }
  }
  	if(c==0){
		printf("语法正确"); 
	}
	
	return 0;
}

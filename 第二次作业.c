#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	system("chcp 65001");
	
	char c[100]; //存放用户输入的字符串
	int a = 0; //描述数组下标的变量
	int j = 0; //判断符号次数的变量
	int M;  //存放判断符号所在数组下标的变量
	int b;  //存放字符串长度

	gets(c);
	
	b = strlen(c);  //检测c的长度
	while(a<b+1){  //加上/0
		if(c[a]>='0' && c[a]<='9'){ //判断是否在0~9之间
			a++;	
		}else if(j==0 && c[a]>='<' && c[a]<='>'){ //第一次检测到判断符号
			M = a;
			j++;
			a++;
		}else if(j==1 && a==M+1 && c[a]=='='){ //第二次检测到判断符号
			a++;	
		}else if(c[a]==';' && c[a+1]=='\0'){  //判断是否为;且后面为\0
			printf("语法正确");
			break;
		}else{
			printf("语法错误，在第%d列", a+1);
			break;
		}
	}
	return 0;	
}
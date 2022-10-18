#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define num 100
char shuru[num];
int i=0;
int ch,c;
int b;
int main(void)
{
    printf("输入字符串；");
    scanf("%s",shuru);
    while(shuru[i]!='\0')
    {
      if(shuru[i]=='<'||shuru[i]=='>')
      {
        b=i+1;
        if(shuru[b]=='<'||shuru[b]=='>')
        {
        printf("语法错误，在第%d个",b+1);
        break;
        }
        else if(shuru[b]=='=')
        {
          while(shuru[b]!='\0')
          {
            b++;
          }
          if(shuru[b-1]==';')
          printf("语法正确");
          if(shuru[b-1]!=';')
          printf("语法错误，缺乏分号");

          break;
      
        }
        else if((ch = isdigit(shuru[b]))!=0)
        {
          while(shuru[b]!='\0')
          {
            b++;
          }
          if(shuru[b-1]==';')
          printf("语法正确");
          if(shuru[b-1]!=';')
          printf("语法错误，缺乏分号");


          break;

        }
      }
      if(shuru[i]=='=')
      {
        c=i+1;
        if(shuru[c]=='=')
        {
          while(shuru[c]!='\0')
          c++;
          if(shuru[c-1]==';')
          {
          printf("语法正确");
          break;
          }
          if(shuru[c-1]!=';')
          {
          printf("语法错误，缺乏分号");
          break;
          }
        }
        if(shuru[c]!='=')
        printf("语法错误，在第%d个",c+1);

        break;

      }
        
    i++;
}
}
#include<stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char ch[100] = {};
    scanf_s("%s", ch,100);
    int u;
    u = strlen(ch);
    int i = 0, j;
    while (ch[i] >= 48 && ch[i] <= 57) {
        i++;
    }
    j = i;
    if (i == 0) {
        printf("语法错误，不是以数字开头");
    }
    else {
        int c, b;
        while (ch[i] >= 60 && ch[i] <= 62) {
            i++;
            b = i - j;
        }
        if (b > 2) {
            printf("语法错误，有三个或三个以上的判断字符");
        }
        else {
            int v = i - 1;
            if (b == 2 && ch[v] != 61) {
                printf("语法错误，第二个判断字符不是等号");
                return 0;
            }
            
            else ((b == 1) && (ch[i]== 62 || ch[i]== 60));
            {
                int k = i, o;
                while (ch[i] >= 48 && ch[i] <= 57) {
                    i++;
                }
                o = i - k;
                if (o == 0) {
                    printf("语法错误，判断符号后面没有数字");
                    return 0;
                }
                if (ch[i] != ';') {
                    printf("语法错误，第二部分数字后面不是分号");
                }

                else {
                    int t = i + 1;
                    if ((ch[i] == ';') && (ch[t]==NULL)) {
                        printf("语法正确");
                    }
                    else {
                        printf("语法错误，最后一个字符不是分号");
                    }
                }
            }


            if (b == 2&&ch[i]==61) {
                int k = i, o;
                while (ch[i] >= 48 && ch[i] <= 57) {
                    i++;
                }
                o = i - k;
                if (o == 0) {
                    printf("语法错误，判断符号后面没有数字");
                    return 0;
                }
                if (ch[i] != ';') {
                    printf("语法错误，第二部分数字后面不是分号");
                }
                else {
                    int t = i + 1;
                    if ((ch[i] == ';') && (ch[t]==NULL)) {
                        printf("语法正确");
                    }
                    else {
                        printf("语法错误，最后一个字符不是分号");
                    }
                }
            }

            ;
            if (b == 0) {
                printf("语法错误，没有判断字符");
            }
        }
    }
   
   
    
    return 0;
}

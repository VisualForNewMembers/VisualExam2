#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{

    char str[80];

    fgets(str, sizeof(str), stdin);

    printf("%s  \n", str);

    if (strchr(str, ';') == NULL)
    {
        printf(" �﷨���󣬴���Ϊ���� ';' ��β \n");
        return 1;
    }

    int n = strlen(str) - strlen(strchr(str, ';'));

    for (int i = 0; i < n - 1; i++)
    {
        char c1 = str[i];
        char c2 = str[i + 1];
        if (str[i] < 48 || str[i] > 57)
        {
            if ((c1 != '<') && (c1 != '>') && (c1 != '='))
            {
                printf("%c �﷨���󣬴��ڵ� %d ��(�ɵ�0�п�ʼ) \n", str[i], i);
                return 1;
            }
            else
            {
                if ((c1 == '<') && ((c2 < 48 || c2 > 57)) && (c2 != '='))
                {
                    printf("%c%c �﷨���󣬴��ڵ� %d-%d ��(�ɵ�0�п�ʼ) \n", str[i], str[i + 1], i, i + 1);
                    return 1;
                }
                if ((c1 == '>') && ((c2 < 48 || c2 > 57)) && (c2 != '='))
                {
                    printf("%c%c �﷨���󣬴��ڵ� %d-%d ��(�ɵ�0�п�ʼ) \n", str[i], str[i + 1], i, i + 1);
                    return 1;
                }
                if ((c1 == '=') && ((c2 < 48 || c2 > 57)) && (c2 != '='))
                {
                    printf("%c%c �﷨���󣬴��ڵ� %d-%d ��(�ɵ�0�п�ʼ) \n", str[i], str[i + 1], i, i + 1);
                    return 1;
                }
            }
        }
    }

    printf("%s \n\n", str);
	printf("�﷨��ȷ"); 
    return 0;

}

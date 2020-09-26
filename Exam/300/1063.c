//输入正整数，输出“十进制,十六进制”
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,i;
    char Hex[20];
    scanf("%d",&a)!=EOF;
    if (a<0)
    {
        return 0;
    }
    i = 0;
    printf("%d,",a);
    while (a > 0)
    {
        Hex[i++] = a % 16;
        a /= 16;
    }
    while (i)
    {
        if (0 <= Hex[i-1] && Hex[i-1] <=9)
        {
            printf("%d",Hex[i-1]);
        }else{
            printf("%c",'A'+Hex[i-1]-10);
        }
        i--;
    }
    return 0;
}

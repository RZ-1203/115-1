#include<stdio.h>
int main()
{
    int a=5;
    int b=1<<2;
    int c=1<<3;
    printf("停車場的權限:%d\n",b);
    printf("學生有無停車場權限:%d\n",a&b);
    printf("學生有無老師辦公室權限:%d\n",a&c);
    return 0;
}
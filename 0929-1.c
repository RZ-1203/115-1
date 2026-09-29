#include<stdio.h>
int main()
{
    int a=9;
    int b=5; 
    int c=2;
    int d=13;
    printf("目前客廳設備：%d\n",d&a);
    printf("目前臥室設備：%d\n",d&b);
    printf("目前廚房設備：%d\n",d&c);
    printf("廚房切換後目前設備狀態:%d\n",d^c);
    return 0;
}
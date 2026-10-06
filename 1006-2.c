#include <stdio.h>
int main()
{
    int score;
    printf("清輸入身高:");
    scanf("%d",&score);
    if (score>=120)
    {
        printf("可以搭乘雲霄飛車");
    }
    else
    {
       printf("身高不足，無法搭乘雲霄飛車");
    } 
    return 0;
}
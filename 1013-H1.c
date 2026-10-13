#include <stdio.h>
int main()
{
    int age;
    printf("輸乘客年齡");
    scanf("%d",&age);
    if(age<=6)
    {
        printf("免費");
    }
    else if(7<=age<=12)
    {
        printf("兒童票");
    }
    else if(13<=age<=64)
    {
        printf("全票");
    }
    else
    {
        printf("敬老票");
    }
    return 0;
}
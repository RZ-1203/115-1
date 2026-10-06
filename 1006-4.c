#include <stdio.h>
int main()
{
    int login;
    int black;
    int c;
    int d;
    printf("請輸入登陸狀態1登入0未登:");
    scanf("%d",&login);
    printf("請輸入帳戶餘額:");
    scanf("%d",&c);
    printf("請輸入提款金額:");
    scanf("%d",&d);
    printf("請輸入是否為黑名單1是0不是:");
    scanf("%d",&black);
    if (login==1 && !black && d<=c )
   {
         printf("可提款");

    }
    else
    {
        printf("不可提款");
    }
    return 0;
}
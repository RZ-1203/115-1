#include<stdio.h>
int main()
{
    int num;
    int total=0;
    do
    {
        printf("請輸入提款金額(輸入0結束):");
        scanf("%d",&num); 
        total+=num;     
    } while (num!=0);
    printf("提款總金額:%d",total);
    return 0;
}
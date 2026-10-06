#include <stdio.h>
int main()
{
    int age;
    int b;
    printf("請輸入成績:");
    scanf("%d",&age);
     if (age>=60)
   {
       printf("請輸入出席率%:");
       scanf("%d",&b);
    
        if(b>=80)
        {
            printf("課程通過");
        }
        else
        {
            printf("課程不通過");
        }
   }
        
    else
    {
       printf("課程不通過");
    }
   
    return 0;
}
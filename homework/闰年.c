#include <stdio.h>

int main()
{
    int year,a;
    printf("�����������ɣ�\n");
    scanf("%d",&year);
    if(year%400==0){
        printf("������\n");
    }
    else
    {
        if(year%4==0&&year%100!=0)
             printf("������\n");
        else
            printf("��������\n");
    }
    return 0;
}

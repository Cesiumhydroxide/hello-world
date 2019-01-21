#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("输入一个整数\n");
    int x, temp, m, i = 1;
    scanf("%d", &x);
    temp = x;
    if(x<10){
            printf("%d",x);
            return 0;
    }
    while(x>=10){
        x = x/10;
        i *= 10;
    }
    while(i != 0){
        m = temp/i;
        temp %= i;
        printf("%d ",m);
        i /= 10;
    }
    return 0;
}

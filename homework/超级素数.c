#include <stdio.h>
#include <stdlib.h>

int pri(int a){
    int b, i;
    if(a<2){
        return 0;
    }
    b=(int)sqrt( (double)a );
    for(i=2;i<=b;i++){
        if(a%i==0){
            break;
        }
    }
    if(i>b)
        return 1;
    else
        return 0;
}


int main()
{
    int x, temp, i=1, j=1, k=0, y;
    int sum = 0, pro = 1, ssum = 0;
    scanf("%d", &x);
    temp = x;
    y = x;
    while(x>=10){
        x = x/10;
        i *= 10;
        j++;
    }
    int a[j];
    while(i != 0){
        a[k] = temp/i;
       // printf("%d\n", a[k]);
        temp %= i;
        i /= 10;
        k++;
    }
    for(k = 0; k<j; k++){
        sum += a[k];
        pro *= a[k];
        ssum += (a[k]*a[k]);
    }
    if(pri(sum)==1&&pri(pro)==1&&pri(ssum)==1&&pri(y)==1){
        printf("是个超级素数。");
    }else{
    //printf("%d %d %d %d", sum, pro, ssum, y);
    printf("不是超级素数。");
    }
    return 0;
}

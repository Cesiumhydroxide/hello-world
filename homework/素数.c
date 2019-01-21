#include <stdio.h>
#include <math.h>

void main(){
    int a, b, i;
    printf("输入整数：");
    scanf("%d",&a);
    if(a<2){
        printf("%d不是素数。\n",a);
    }
    b=(int)sqrt( (double)a );
    for(i=2;i<=b;i++){
        if(a%i==0){
            break;
        }
    }
    if(i>b)
        printf("%d是素数。\n",a);
    else
        printf("%d不是素数。\n",a);
    return 0;
}

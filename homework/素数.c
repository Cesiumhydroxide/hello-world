#include <stdio.h>
#include <math.h>

void main(){
    int a, b, i;
    printf("����������");
    scanf("%d",&a);
    if(a<2){
        printf("%d����������\n",a);
    }
    b=(int)sqrt( (double)a );
    for(i=2;i<=b;i++){
        if(a%i==0){
            break;
        }
    }
    if(i>b)
        printf("%d��������\n",a);
    else
        printf("%d����������\n",a);
    return 0;
}

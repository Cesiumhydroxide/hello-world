#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("�����밴˳�����뷽���� ax+by=c dx+ey=f ��a��b��c��d��e��f\n");
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    if((b*d-a*e)==0){
        printf("�˷������޽⡣\n");
    }
    else{
        printf("X=%.lf, Y=%.lf", (c*e-f*b)/(a*e-b*d), (c*d-a*f)/(b*d-a*e));
    }
    return 0;
}

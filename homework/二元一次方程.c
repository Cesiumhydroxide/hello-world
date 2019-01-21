#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("请输入按顺序输入方程组 ax+by=c dx+ey=f 的a，b，c，d，e，f\n");
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    if((b*d-a*e)==0){
        printf("此方程组无解。\n");
    }
    else{
        printf("X=%.lf, Y=%.lf", (c*e-f*b)/(a*e-b*d), (c*d-a*f)/(b*d-a*e));
    }
    return 0;
}

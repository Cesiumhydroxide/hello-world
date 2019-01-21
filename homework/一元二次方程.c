#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("请按顺序输入方程 ax^2+bx+c=0 的a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
        if(b==0){
            printf("你输得撒子鬼哦，重新来！");
            return 0;
        }
        printf("方程有一解，解为%d",-(c/b));
        return 0;
	}
	if(pow(b,2)-4*a*c<0)
	{
		printf("这个方程没得解！");
	 }
	 else if(pow(b,2)-4*a*c==0)
	 {
	 	printf("这个方程有一解，解为%d",-b/(2*a));
	 }
	 else if(pow(b,2)-4*a*c>=0)
	 {
	 	printf("这个方程有两个解，解分别为%f,%f",(-b+sqrt(pow(b,2)-4*a*c))/(2*a),(-b-sqrt(pow(b,2)-4*a*c))/(2*a));
	 }
	 else
	 {
	 	printf("你输得撒子鬼哦，重新来！");
	 }
	return 0;
}

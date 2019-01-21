#include <stdio.h>

void main(){
	int num, a, b=0;
	printf("请输入一个数字：\n");
	scanf("%d", &num);
	a = num;
	while(a>0){
		b = b*10+a%10;
		a = a/10;
	}
	if(b==num){
		printf("是的\n");
	}else{
		printf("不是\n");
	}
}

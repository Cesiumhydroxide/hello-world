#include <stdio.h>

void main(){
	int num, a, b=0;
	printf("������һ�����֣�\n");
	scanf("%d", &num);
	a = num;
	while(a>0){
		b = b*10+a%10;
		a = a/10;
	}
	if(b==num){
		printf("�ǵ�\n");
	}else{
		printf("����\n");
	}
}

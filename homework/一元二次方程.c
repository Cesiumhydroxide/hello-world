#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("�밴˳�����뷽�� ax^2+bx+c=0 ��a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
        if(b==0){
            printf("��������ӹ�Ŷ����������");
            return 0;
        }
        printf("������һ�⣬��Ϊ%d",-(c/b));
        return 0;
	}
	if(pow(b,2)-4*a*c<0)
	{
		printf("�������û�ý⣡");
	 }
	 else if(pow(b,2)-4*a*c==0)
	 {
	 	printf("���������һ�⣬��Ϊ%d",-b/(2*a));
	 }
	 else if(pow(b,2)-4*a*c>=0)
	 {
	 	printf("��������������⣬��ֱ�Ϊ%f,%f",(-b+sqrt(pow(b,2)-4*a*c))/(2*a),(-b-sqrt(pow(b,2)-4*a*c))/(2*a));
	 }
	 else
	 {
	 	printf("��������ӹ�Ŷ����������");
	 }
	return 0;
}

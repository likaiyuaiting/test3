#include<stdio.h>
int main()
{
	int num=1;
	int N;
	int i=0;
	printf("输入要求阶乘N值：");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
		num*=i;
	printf("haha\n");
	printf("N的阶乘为：%d\n",num);
	return 0;
}


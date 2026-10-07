#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int main()
{
	int a,b;
	printf("Enter two number\n");
	scanf("%d %d",&a,&b);
	printf("add result:%d\n",add(a,b));
	printf("sub result:%d\n",sub(a,b));
	printf("mul result:%d\n",mul(a,b));
	return 0;
}

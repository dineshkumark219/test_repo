#include <stdio.h>
int add(int, int);
int main()
{
	int a,b;
	printf("Enter two number\n");
	scanf("%d %d",&a,&b);
	printf("add result:%d\n",add(a,b));
	return 0;
}

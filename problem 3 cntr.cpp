#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("enter two intigers:");
	scanf("%d%d",&a,&b);
	printf("enter an operator:");
	scanf(" %c",&ch);
	if(ch=='*')
      printf("%d*%d=%d",a,b,a*b);
    else if(ch=='+')
      printf("%d+%d=%d",a,b,a+b);
    else if(ch=='-')
      printf("%d-%d=%d",a,b,a-b);
    else
      printf("%d/%d=%d",a,b,a/b);
      return 0;
}

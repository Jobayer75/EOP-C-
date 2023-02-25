#include<stdio.h>
#define limit 5
int main()
{
    int a,b=0;
    int c[5]={2,8,16,18,20};
    for (a=0;a<limit - 3;a++)
    
    if(c[a]%2==0)
    {
        printf("c[%d] is %d\n",a,c[a]);
       b+=c[a];
    }
    printf("final value of b is %d\n",b);
        
    return 0;
    }

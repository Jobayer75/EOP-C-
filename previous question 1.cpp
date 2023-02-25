#include<stdio.h>
#include<string.h>
int main()
{
	int response[30],frequency[5],x;
	for(x=0;x<30;x++)
	{
	
		printf("Enter your scale:");
		scanf("%d",response[x]);
		
		if(response[x]==1)
		 printf("frequency[0]++");
		 else if(response[x]==2)
		 printf("frequency[1]++");
		
		else  if(response[x]==3)
		 printf("frequency[2]++");
	
	   else if(response[x]==4)
		 printf("frequency[3]++");
		 
		else if  (response[x]==5)
		 printf("frequency[4]++");
		 
	}
	printf("response\tFrequency\n");
	for(x=0;x<5;x++)
	 printf("%d\t%d\n",x+1,frequency[x]);
}

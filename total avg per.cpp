#include<stdio.h>
int main()
{
	float eng,phy,che,math;
	float total,average,percentage;
    printf("enter mark of 4 subjects:\n");
    scanf("%f%f%f%f",&eng,&phy,&che,&math);
    total=eng+phy+che+math;
    average=total/4.0;
    percentage=(total/400.00)*100;
    printf("total marks=%.2f\n",total);
    printf("aveage marks=%.2f\n",average);
    printf("percentage marks=%.2f\n",percentage);
    return 0;
    
	
}

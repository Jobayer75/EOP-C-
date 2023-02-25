#include <stdio.h>
#include <string.h>
int main( )
{
char string1[20] = "Hello";
char string2[20] = "World";
char string3[20]= "Good";
	
printf("string1 is %s\n", string1);		
printf("string2 is %s\n", string2);		

printf("Length of string1 is %d and string2 is %d\n",strlen(string1), strlen(string2));	


strcat(string2, string1);		
strcat(string1, string3);		
printf("Now string1 is %s and string2 is %s\n", string1, string2);	


strcpy(string3, "IIUM");		
printf("Now string3 is %s\n", string3);
	
if (strcmp(string1, string2)==0)	

	printf("string1 is equal to string2\n");	
else
	printf("string1 is not equal to string2\n");	
	
return 0;
}


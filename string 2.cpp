#include<stdio.h>
#include<string.h>
int main()
{
char str1[10] = "best";
char str2[10] = "IIUM";
char str3[10] = "Gombak";
strcat (str1, str3);
strcpy (str3, str2);		
printf("%s\n%s\n%s\n", str1, str2, str3);
}

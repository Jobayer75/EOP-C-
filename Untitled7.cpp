/*#include<stdio.h>
#include<string.h>
int main()
{
char str1[10] = "best";
char str2[10] = "IIUM";
char str3[10] = "Gombak";
strcat (str1, str3);
strcpy (str3, str2);
printf("%s\n%s\n%s\n", str1, str2,str3);		
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
char try1[20] = "salman";
char try2[20] = "irfan";
char try3[20] = "fatma";
strcpy (try3, try2);								
printf("%s\t%s\n", try3, try2);
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
char try1[20] = "salman";
char try2[20] = "irfan";
char try3[20] = "fatma";
strcat(try1, try3);								
printf("%s\t%s\n", try1, try3);
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
char mesej[30] = "We love C Programming";
char mesei[3][20] = { "Arsenal", "Manchester", "Liverpool"} ;
mesej[7] ='\0';
puts(mesej);
printf("%s\n", mesei[1]);


}


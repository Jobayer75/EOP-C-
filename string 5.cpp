#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main ( ) 
{
 char  name[15];
 int i;

 printf ("Enter your name, max of 15 letters \n");
 gets (name);	

 for (i=0;i<15;++i) 
	 name [i] = toupper (name [i]);	
 
 printf ("\nThe name you entered in UPPERCASE is:\n");
 puts (name);	

 for (i=0;i<15;++i) 
	name [i] = tolower (name [i]);	

 printf ("\nThe name you entered in LOWERCASE is:\n");
 puts (name); 	

 i=strlen(name);	
 printf ("\nThe number of character in your name is %d\n", i);
}


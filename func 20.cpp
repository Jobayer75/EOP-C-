#include <stdio.h>
int ColorMenu (void);		

int main ( )
{
	int cYou, cFriend;

	printf("What is your favorite color?\n");
	cYou = ColorMenu ( );		

printf("What is your friend's favorite color?\n");
	cFriend = ColorMenu ( );	

	if (cYou == cFriend)
		printf("Hey, both of you like the same color!\n");
	else
		printf("Well, it doesn't matter.\n");

	return 0;
}

int ColorMenu (void)
{
	int c;
	printf(" 1 - Blue, 2 - Red, 3 - Yellow, 4 - Green: ");
	scanf("%d", &c);
	return c;
}


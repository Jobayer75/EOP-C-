#include <iostream>
#include <string.h>
using namespace std;
void Palindrome()
{
	char s1[20], s2[20];

    int i, j, size = 0, f = 0;

    cout << "Enter the string : ";
    gets(s1);

    size = strlen(s1) - 1;

    for (i = size, j = 0; i >= 0 ; i--, j++)
        s2[j] = s1[i];

    if (strcasecmp(s1, s2))
        f = 1;

    if (f == 1)
        cout << s1 << " is not a palindrome";
    else
        cout << s1 << " is a palindrome";

}
int main()
{
	Palindrome();

    return 0;
}

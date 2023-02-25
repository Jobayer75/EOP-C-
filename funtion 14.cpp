#include <stdio.h>


/* Function declaration */
void printNaturalNumbers(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, upperLimit;

    /* Input lower and upper limit from user */    
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    
    return 0;
}


/**
 * Recursively prints all natural number between the given range.
 */
void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    
    printf("%d, ", lowerLimit);

    // Recursively call the function to print next number
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}

// linear search algorithm in C
#include <stdio.h>

int main()
{
    // array of numbers
    int numbers[] = {44, 17, 0, 22, 54, 100, 1};

    // get number from user
    printf("Number to search for: ");
    int n;
    scanf("%i", &n);

    // search for number in array
    for (int i = 0; i < 7; i++)
    {
        // if number is found, print "found" and return 0
        if (numbers[i] == n)
        {
            printf("found\n");
            return 0; // exit program
        }
    }
    // if number is not found, print "not found" and return 1
    printf("not found\n");
    return 1;
}
#include <stdio.h>
int main()
{
    // variable declaration
    int num, i;
    // input from user
    printf("Enter number for which you want to display table of:");
    scanf("%d",&num);
    // output of the number that user have entered
    printf("Here is the number:\n");
    // use of for loop
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }
    
    return 0;
}

#include <stdio.h>
add(int n);
int main()
{
    int n, sum;
    printf("\n\n\t*Welcome! to Akash Addition Calculator*\n\n");
    printf("______________________________________________________\n\n");
    printf("Enter the number you want the sum of: \n");
    scanf("%d", &n);
    sum = add(n);
    printf("The sum of the number %d = %d", n, sum);
    return 0;
}
int add(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return ((n%10) + (add(n/10))); // in this if the if statement is false it will move to else statement and in this else statement n module 10 give the last digit of number and the add(n/10) divide the number by 10 and remainder until the condition of if becomes true.
    }    
}

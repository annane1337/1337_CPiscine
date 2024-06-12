/*
    Create a function that displays the number entered as a parameter.
    The function has to be able to display all possible values within an int type variable.

    Here's how it should be prototyped:
    void	ft_putnbr(int nbr);

    For example:
        ft_putnbr(1337) displays '1337'.

    Files to turn in: ft_putnbr.c
    Allowed functions: ft_putchar
*/
#include <unistd.h>

void    ft_putchar(char c){

    write(1,&c,1);
}

void    ft_putnbr(int   nbr){

    // If number is smaller than 0, put a - sign
    // and change number to positive
    if (nbr < 0){

        ft_putchar('-');
        nbr = -nbr;

    }
    // Remove the last digit and recur
    if (nbr/10)
        ft_putnbr(nbr/10);
 
    // Print the last digit
    ft_putchar(nbr%10 + '0');
}
 
// Driver program to test above function
int main()
{
    long int n = 1337;
    ft_putnbr(n);
    return 0;
}
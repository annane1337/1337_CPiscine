/**
 * Allowed Function: write
 * ========================
 *  Write a function that displays the character passed as a parameter.
•   It will be prototyped as follows :
    void ft_putchar(char c)
 **/
#include <unistd.h>

void    ft_putchar(char c){

    write(1,&c,1);
}

int     main(){

    ft_putchar('H');
    return (0);
}
/*
    Allowed functions : write

    • Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
    as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.

    • Here’s how it should be prototyped :
      void ft_is_negative(int n);

*/
#include <unistd.h>

void    ft_putchar(char c){

    write(1,&c,1);
}

void    ft_is_negative(int  n){

    if (n >= 0){

        ft_putchar('P');
    }
    else

        ft_putchar('n');
}

int     main(){

    ft_is_negative(0);
}
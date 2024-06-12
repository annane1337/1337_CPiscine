/*
    Allowed functions : write

    • Create a function that displays all digits, on a single line, by ascending order.
    • Here’s how it should be prototyped :
    void ft_print_numbers(void);
*/
#include <unistd.h>

void    ft_putchar(char c){

    write(1,&c,1);
}

void    ft_print_numbers(void){

    int number = 0;

    while(number <= 9){

        ft_putchar(number + '0');

        number++;
    }
}

int main(){

    ft_print_numbers();
}
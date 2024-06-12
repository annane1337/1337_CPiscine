/*
    Allowed functions : write

    • Create a function that displays all different combination of two digits between 00
    and 99, listed by ascending order.

    • Here’s the expected output :
    $>./a.out | cat -e
    00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>

    • Here’s how it should be prototyped :
    void ft_print_comb2(void);
*/
#include <unistd.h>

void    ft_putchar(char c){

    write(1,&c,1);
}

void    ft_print_comb2(void){

    int digit1;
    int digit2;

    digit1 = 0;
    while(digit1 <= 98){

        digit2 = digit1 + 1;
        while (digit2 <= 99)
        {
            ft_putchar((digit1/10)+'0');
            ft_putchar((digit1%10)+'0');

            ft_putchar(' ');

            ft_putchar((digit2/10)+'0');
            ft_putchar((digit2%10)+'0');

            if(digit1 != 98 || digit2 != 99){

                ft_putchar(';');
                ft_putchar(' ');
            }
            digit2++;
        }
        
        digit1++;
    }
}

int main(){

        ft_print_comb2();
}
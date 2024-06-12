/*

Allowed functions : write

•Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’.

•Here’s how it should be prototyped :
    void ft_print_alphabet(void);
*/
#include <unistd.h>

void    ft_putchar(char c){

    write(1,&c,1);
}

void    ft_print_alphabet(void){

    char letter = 'a';

    while(letter <= 'z'){

        ft_putchar(letter);

        letter++;
    }
}

int main(){
    
    ft_print_alphabet();
}
/*
    Allowed functions : write

    • Create a function that displays all different combinations of three different digits in
    ascending order, listed by ascending order - yes, repetition is voluntary.

    • Here’s the intended output :
    $>./a.out | cat -e
    012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>

    • 987 isn’t there because 789 already is.
    • 999 isn’t there because the digit 9 is present more than once.
    • Here’s how it should be prototyped :
    void ft_print_combo(void);
*/
#include <unistd.h>

void    ft_putchar(char c){

    write(1,&c,1);
}

void    ft_print_combo(void){

    int DigitOne;
    int DigitTwo;
    int digitthree;

    DigitOne = 0;

    while(DigitOne <= 7){

        DigitTwo = DigitOne + 1;

        while (DigitTwo <= 8)
        {
            digitthree = DigitTwo + 1;

            while (digitthree <= 9)
            {   
                ft_putchar(DigitOne + '0');
                ft_putchar(DigitTwo + '0');
                ft_putchar(digitthree + '0');

                if(DigitOne != 7 || DigitTwo != 8 || digitthree != 9){
                    
                    ft_putchar(',');
                    ft_putchar(' ');
                }

                digitthree++;
            }

            DigitTwo++;
        }

        DigitOne++;
    }
}

int main(){

    ft_print_combo();
}
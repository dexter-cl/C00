#include <unistd.h>

    void ft_print_reverse_alphabet(void)
    {
        char Ralp;
        Ralp = 'z';
        while (Ralp >= 'a')
        {
        write(1, &Ralp, 1);
        Ralp--;
        }
    }
    

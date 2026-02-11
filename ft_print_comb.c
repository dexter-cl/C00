#include <unistd.h>
    
        void ft_print_comb(void)
        {
            char A,H,M;
            A = '0';
            while (A <= '7')
            {
                H = A + 1;
                while (H <= '8')
                {
                    M = H + 1;
                    while (M <= '9')
                    {
                         write(1, &A, 1);
                         write(1, &H, 1);
                         write(1, &M, 1);
                if(!(A == '7' && H == '8' && M == '9'))
                {
                        write(1, ", ", 2);
                }
                       M++;  
                    }
                     H++;
                }
                 A++;
            }
          
        }
        

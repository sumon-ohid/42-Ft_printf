#include "printf.h"

void    ft_print_d(va_list args)
{
    int i;

    i = va_arg(args, int);
    ft_putnbr(i);
}

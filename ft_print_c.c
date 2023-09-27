#include "printf.h"

void    ft_print_c(va_list args)
{
    char c;

    c = va_arg(args, int);
    write(1, &c, 1);
}
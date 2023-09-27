#include "printf.h"

void    ft_print_s(va_list args)
{
    char *str;
    int i;

    i = 0;
    str = va_arg(args, char*);
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

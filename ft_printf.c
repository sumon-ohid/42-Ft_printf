#include "printf.h"

int ft_printf(const char *str, ...)
{
    int i;
    va_list args;
    va_start(args, str);

    i = 0;
    while (str[i])
    {
        if (str[i] == '%')
        {
            if(str[i + 1] == 'c')
                ft_print_c(args);
            if(str[i + 1] == 's')
                ft_print_s(args);
            if(str[i + 1] == 'd')
                ft_print_d(args);
                i++;
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
    va_end(args);
    return (i);
}


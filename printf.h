#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int     main(void);
int     ft_printf(const char *str, ...);
void    ft_print_c(va_list arg);
void    ft_print_s(va_list args);
void    ft_print_d(va_list args);
void    ft_putchar(char c);
void    ft_putnbr(int n);

#endif
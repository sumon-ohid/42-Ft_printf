#include "printf.h"

int main(void)
{
    char c;
    char *str;
    int x;

    str = "Hello Test";
    x = 111434341;
    c = 'A';
    ft_printf("Char c is : %c %c\n", c,c);
    ft_printf("String is : %s\n", str);
    ft_printf("Int is : %d\n", x);

    return (0);
}

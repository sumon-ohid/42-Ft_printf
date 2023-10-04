/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:03:17 by msumon            #+#    #+#             */
/*   Updated: 2023/10/04 15:37:38 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if (specifier == 'd')
		count += print_digit((long)va_arg(args, int), 10);
	else if (specifier == 'u')
		count += print_digit((long)va_arg(args, unsigned int), 10);
	else if (specifier == 'i')
		count += print_digit((long)va_arg(args, int), 10);
	else if (specifier == 'x')
		count += print_digit((long)va_arg(args, unsigned int), 16);
	else if (specifier == 'X')
		count += print_digit_cap((long)va_arg(args, unsigned int), 16);
	else if (specifier == 'p')
		count += print_pointer(va_arg(args, void *));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += print_format(str[i + 1], args);
			i++;
		}
		else
		{
			count += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}

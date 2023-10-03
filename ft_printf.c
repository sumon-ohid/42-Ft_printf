/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:03:17 by msumon            #+#    #+#             */
/*   Updated: 2023/10/03 12:57:03 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				ft_print_c(args);
			if (str[i + 1] == 's')
				ft_print_s(args);
			if (str[i + 1] == 'd')
				ft_print_d(args);
			if (str[i + 1] == '%')
				ft_print_p(args);
			if (str[i + 1] == 'i')
				ft_print_i(args);
			if (str[i + 1] == 'u')
				ft_print_u(args);
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

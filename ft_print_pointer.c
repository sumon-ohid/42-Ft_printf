/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:34:06 by msumon            #+#    #+#             */
/*   Updated: 2023/10/04 15:43:19 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	int					count;
	unsigned long long	n;

	count = 0;
	n = (unsigned long long)ptr;
	if (n == 0)
	{
		return (print_str("(nil)"));
	}
	else
	{
		count += print_str("0x");
		count += print_digit(n, 16);
	}
	return (count);
}

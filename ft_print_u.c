/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:30:06 by msumon            #+#    #+#             */
/*   Updated: 2023/10/03 12:44:56 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_print_u(va_list args)
{
	int i;

	i = va_arg(args, int);
    if (i > 0)
	    ft_putnbr(i);
    else
        ft_putchar('0');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:03:32 by msumon            #+#    #+#             */
/*   Updated: 2023/10/02 09:03:33 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }  
    ft_putchar('0' + n % 10);
}

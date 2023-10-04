/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:03:40 by msumon            #+#    #+#             */
/*   Updated: 2023/10/04 10:14:36 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	c;
	char	*str;
	int		x;

	str = "Hello Test";
	x = -2147483647;
	c = 'A';
	ft_printf("Char c is : %c\n", c);
	ft_printf("String is : %s\n", str);
	ft_printf("Int is : %d\n", x);
	ft_printf("Int is : %%\n");
	ft_printf("Int is : %i\n", x);
	ft_printf("Int is : %u\n", x);

	return (0);
}

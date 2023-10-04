/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:36:25 by msumon            #+#    #+#             */
/*   Updated: 2023/10/04 15:47:16 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		count;
	char	*ptr;

	ptr = "Hello";
	count = ft_printf(" 1 Hello %s\n", "Sumon");
	ft_printf(" 1 The chars written are %d\n", count);
	count = ft_printf(" 2 %x\n", 468);
	ft_printf(" 2 The char written are %d\n", count);
	count = ft_printf(" 3 %X\n", 468);
	ft_printf(" 3 The char written are %d\n", count);
	count = ft_printf(" 4 Char %c %c %c\n", 'A', 'B', 'C');
	ft_printf(" 4 The char written are %d\n", count);
	count = ft_printf(" 5 Number is :%d\n", -2147483648);
	ft_printf(" 5 The char written are %d\n", count);
	count = ft_printf("Pointer address: %p\n", (void *)ptr);
	ft_printf("The chars written are %d\n", count);
	count = printf("Pointer address: %p\n", (void *)ptr);
	printf("The chars written are %d\n", count);
	return (0);
}

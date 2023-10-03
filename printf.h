/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:03:43 by msumon            #+#    #+#             */
/*   Updated: 2023/10/03 13:03:54 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// int		main(void);
int		ft_printf(const char *str, ...);
void	ft_print_c(va_list arg);
void	ft_print_s(va_list args);
void	ft_print_d(va_list args);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_print_p(void);
void	ft_print_i(va_list args);
void	ft_print_u(va_list args);

#endif
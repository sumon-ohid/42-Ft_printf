/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:03:43 by msumon            #+#    #+#             */
/*   Updated: 2023/10/04 10:40:00 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		main(void);
int		ft_printf(const char *str, ...);
int		ft_print_c(va_list args);
void	ft_print_s(va_list args);
void	ft_print_d(va_list args);
void 	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_print_per(void);
void	ft_print_i(va_list args);
void	ft_print_u(va_list args);

#endif
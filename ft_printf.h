/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:20:27 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/02/26 15:49:19 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_bas_say(unsigned int c);
int	array_print(char *str);
int	ft_putchar_v2(char g);
int	hex_print(unsigned int n, char c);
int	ptr_printer(unsigned long n);
int	ptr_print(unsigned long n);
int	ft_uitoa(unsigned int a);
int	ft_strchecker(va_list arg, int g);
int	ft_printf(const char *str, ...);

#endif

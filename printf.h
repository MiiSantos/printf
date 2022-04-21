/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:14:11 by mandress          #+#    #+#             */
/*   Updated: 2022/04/22 00:46:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "./libft/libft.h"

# define HEX_L "0123456789abcdef"
# define DEC "0123456789"

int	type(const char *str, va_list list);
int	ft_printf(const char *str, ...);
int	print_char(va_list list, char c);
int print_string(va_list list);
int print_p(va_list list);
int	print_d(va_list list);
int	print_i(va_list list);
int	print_u(va_list list);

#endif

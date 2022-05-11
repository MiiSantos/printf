/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:14:11 by mandress          #+#    #+#             */
/*   Updated: 2022/05/11 03:22:37 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./utils/utils.h"

# define HEX_L "0123456789abcdef"
# define HEX_U "0123456789ABCDEF"
# define DEC "0123456789"

int	type(const char *str, va_list list);
int	ft_printf(const char *str, ...);
int	print_char(va_list list, char c);
int	print_string(va_list list);
int	print_p(va_list list);
int	print_d(va_list list);
int	print_i(va_list list);
int	print_u(va_list list);
int	print_x(va_list list);
int	print_x_upper(va_list list);

#endif

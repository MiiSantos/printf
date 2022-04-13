/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:14:11 by mandress          #+#    #+#             */
/*   Updated: 2022/04/13 03:34:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include<stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	type(const char *str, va_list list);
int	ft_printf(const char *str, ...);
int	print_char(va_list list, char c);

#endif

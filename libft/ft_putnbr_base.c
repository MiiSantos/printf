/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:34:07 by coder             #+#    #+#             */
/*   Updated: 2022/04/22 01:02:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_putnbr_base(unsigned long long n, char *base, int len)
{
    if (n >= (unsigned long long)ft_strlen(base))
    {
        len = len + 1;
        ft_putnbr_base(n / ft_strlen(base), base, len);
    }
    ft_putchar_fd(base[n % ft_strlen(base)], 1);
	return(len);
}
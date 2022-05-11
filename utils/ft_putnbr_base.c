/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:34:07 by coder             #+#    #+#             */
/*   Updated: 2022/05/11 03:29:35 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putnbr_base(size_t n, char *base, int len)
{
	if (n >= (size_t)ft_strlen(base))
	{
		len = len + 1;
		len = ft_putnbr_base(n / ft_strlen(base), base, len);
	}
	else
		len = len + 1;
	ft_putchar_fd_count(base[n % ft_strlen(base)], 1);
	return (len);
}

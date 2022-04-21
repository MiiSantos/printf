/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:41:49 by mandress          #+#    #+#             */
/*   Updated: 2021/11/18 15:56:02 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

void	ft_to_char(long n, char *s, int i)
{
	s[i] = '\0';
	while (n)
	{
		i--;
		s[i] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;
	long	nb;

	neg = 0;
	nb = (long)n;
	i = ft_numlen(n);
	if (nb <= 0)
	{
		nb = -nb;
		i += 1;
		neg = 1;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	ft_to_char(nb, str, i);
	if (str[1] == '\0' && n == 0)
		str[0] = '0';
	else if (neg == 1 && str[1] != '\0')
		str[0] = '-';
	return (str);
}

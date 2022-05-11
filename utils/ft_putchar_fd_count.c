/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:44:23 by mandress          #+#    #+#             */
/*   Updated: 2022/05/11 03:30:09 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putchar_fd_count(char c, int fd)
{
	int	len;

	len = 0;
	write(fd, &c, 1);
	len++;
	return (len);
}

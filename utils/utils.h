/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:22:30 by mandress          #+#    #+#             */
/*   Updated: 2022/05/11 02:30:57 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int n);
int		ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
int		ft_putchar_fd_count(char c, int fd);
int		ft_putnbr_base(size_t n, char *base, int len);

#endif

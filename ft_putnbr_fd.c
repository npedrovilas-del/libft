/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:34:51 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/04/16 18:46:58 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	f;

	f = n;
	if (f < 0)
	{
		write(fd, "-", 1);
		f = -f;
	}
	if (f >= 10)
		ft_putnbr_fd((int)(f / 10), fd);
	c = (f % 10) + '0';
	write(fd, &c, 1);
}

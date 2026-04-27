/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:31:26 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/04/16 18:46:32 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	x;
	size_t			i;

	s = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == x)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:31:46 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/04/16 18:46:40 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*p;
	size_t			i;

	s = (unsigned char *)s1;
	p = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != p[i])
			return (s[i] - p[i]);
		i++;
	}
	return (0);
}

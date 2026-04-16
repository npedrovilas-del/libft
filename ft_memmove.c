/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:32:50 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/04/16 18:46:49 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		d = (unsigned char *)dest + n;
		s = (const unsigned char *)src + n;
		while (n--)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}

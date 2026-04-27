/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:38:01 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/04/16 18:38:02 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	rstr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!rstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		rstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		rstr[i + j] = s2[j];
		j++;
	}
	rstr[i + j] = '\0';
	return (rstr);
}

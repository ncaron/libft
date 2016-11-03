/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:53:23 by Niko              #+#    #+#             */
/*   Updated: 2016/11/02 22:56:23 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (!s1[i] || !s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while (s1[i] && s2[i] && i < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 < c2 || c1 > c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

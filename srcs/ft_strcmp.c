/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:37:16 by Niko              #+#    #+#             */
/*   Updated: 2016/11/02 22:39:55 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	if (!s1[i] || !s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while (s1[i] && s2[i])
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 < c2 || c1 > c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

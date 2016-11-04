/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:00:58 by Niko              #+#    #+#             */
/*   Updated: 2016/11/04 15:21:44 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char*)s;
	i = 0;
	while (ss[i] && i < n)
	{
		if (ss[i] == (unsigned char)c)
			return (&ss[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&ss[i]);
	return (NULL);
}

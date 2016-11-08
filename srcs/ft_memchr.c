/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:00:58 by Niko              #+#    #+#             */
/*   Updated: 2016/11/07 20:30:20 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ss;

	ss = (unsigned char*)s;
	while (*ss++ && n--)
	{
		if (*ss == (unsigned char)c)
			return (ss);
	}
	if ((unsigned char)c == '\0')
		return (ss);
	return (NULL);
}

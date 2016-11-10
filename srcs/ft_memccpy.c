/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:26:34 by Niko              #+#    #+#             */
/*   Updated: 2016/11/09 16:20:35 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sdst;
	unsigned char	*ssrc;

	sdst = (unsigned char*)dst;
	ssrc = (unsigned char*)src;
	i = 0;
	while (n && *ssrc != (unsigned char)c)
	{
		*sdst++ = *ssrc++;
		n--;
	}
	if (n == 0)
		return (NULL);
	*sdst++ = *ssrc++;
	return (sdst);
}

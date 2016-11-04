/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:05:17 by Niko              #+#    #+#             */
/*   Updated: 2016/11/03 20:14:25 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*sdst;
	char	*ssrc;

	sdst = (char*)dst;
	ssrc = (char*)src;
	i = 0;
	while (i < n)
	{
		sdst[i] = ssrc[i];
		i++;
	}
	return (dst);
}

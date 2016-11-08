/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:33:48 by Niko              #+#    #+#             */
/*   Updated: 2016/11/07 20:14:24 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	sc;
	char			*ss;

	sc = (unsigned char)c;
	ss = (char*)s;
	while (*ss)
	{
		if (*ss == c)
			return (ss);
		ss++;
	}
	if (sc == '\0')
		return (ss);
	return (NULL);
}

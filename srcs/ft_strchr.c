/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:33:48 by Niko              #+#    #+#             */
/*   Updated: 2016/11/04 21:39:33 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	sc;
	char			*ss;

	sc = (unsigned char)c;
	ss = (char*)s;
	i = 0;
	while (ss[i])
	{
		if (ss[i] == c)
			return (&ss[i]);
		i++;
	}
	if (sc == '\0')
		return (&ss[i]);
	return (NULL);
}

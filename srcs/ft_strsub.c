/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:53:29 by Niko              #+#    #+#             */
/*   Updated: 2016/11/05 13:29:23 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;
	int		j;

	i = start;
	j = 0;
	if (!s || ft_strlen(s) < start + len)
		return (NULL);
	s2 = ft_stralloc(len);
	if (s2)
	{
		ft_strncpy(s2, &s[start], len);
		s2[len] = '\0';
		return (s2);
	}
	return (NULL);
}

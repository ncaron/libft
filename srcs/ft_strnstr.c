/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:13:50 by Niko              #+#    #+#             */
/*   Updated: 2016/11/06 12:58:19 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (ft_strequ(little, ""))
		return ((char*)big);
	while (big[i] && i < len && little_len + i <= len)
	{
		if (ft_strnequ(&big[i], little, little_len))
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}

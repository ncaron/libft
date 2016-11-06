/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 22:42:01 by Niko              #+#    #+#             */
/*   Updated: 2016/11/06 12:09:24 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;

	i = 0;
	if (ft_strequ(little, ""))
		return ((char*)big);
	while (big[i])
	{
		if (ft_strnequ(&big[i], little, ft_strlen(little)))
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}

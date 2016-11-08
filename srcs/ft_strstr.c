/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 22:42:01 by Niko              #+#    #+#             */
/*   Updated: 2016/11/07 20:13:18 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	if (ft_strequ(little, ""))
		return ((char*)big);
	while (*big)
	{
		if (ft_strnequ(big, little, ft_strlen(little)))
			return ((char*)big);
		big++;
	}
	return (NULL);
}

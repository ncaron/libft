/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contains_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 03:03:36 by Niko              #+#    #+#             */
/*   Updated: 2017/02/22 03:05:54 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if a string contains the specified char.
** Returns 1 if it contains it, 0 if it doesn't,
*/

#include "../libft.h"

int	ft_contains_char(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

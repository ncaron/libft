/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_chr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 14:05:09 by Niko              #+#    #+#             */
/*   Updated: 2016/12/04 14:06:36 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Replaces the char c1 with the char c2 in the string s.
*/

#include "../libft.h"

void	ft_replace_chr(char *s, char c1, char c2)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
			s[i] = c2;
		i++;
	}
}

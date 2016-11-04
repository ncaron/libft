/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:20:55 by Niko              #+#    #+#             */
/*   Updated: 2016/11/04 14:25:08 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isspace(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (uc == '\t' || uc == '\n' || uc == '\v' || uc == '\f' || uc == '\r' ||
				uc == ' ')
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:30:46 by Niko              #+#    #+#             */
/*   Updated: 2016/11/04 16:33:11 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
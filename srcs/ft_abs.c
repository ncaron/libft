/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 19:34:11 by Niko              #+#    #+#             */
/*   Updated: 2017/01/12 16:35:34 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the absolute value of a number.
*/

#include "../libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

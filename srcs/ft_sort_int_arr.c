/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:59:52 by Niko              #+#    #+#             */
/*   Updated: 2016/11/07 21:15:06 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sort_int_arr(int *arr, size_t size)
{
	size_t	i;
	int		tmp;

	i = 0;
	while (i < size)
	{
		if (arr[i] > arr[i + 1] && (i + 1) != size)
		{
			tmp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:59:30 by Niko              #+#    #+#             */
/*   Updated: 2016/11/05 13:31:11 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = ft_stralloc(size);
	if (ptr)
		return (ft_memset(ptr, '\0', size + 1));
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:01:34 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/23 16:20:31 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arr_dest;
	unsigned char	*arr_src;

	arr_dest = (unsigned char *)dest;
	arr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		arr_dest[i] = arr_src[i];
		i++;
	}
	return (dest);
}

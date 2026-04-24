/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:18:03 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/24 11:19:42 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arr_dest;
	unsigned char	*arr_src;

	arr_dest = (unsigned char *)dest;
	arr_src = (unsigned char *)src;
	if (arr_dest > arr_src)
	{
		while (n > 0)
		{
			n--;
			arr_dest[n] = arr_src[n];
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		arr_dest[i] = arr_src[i];
		i++;
	}
	return (dest);
}

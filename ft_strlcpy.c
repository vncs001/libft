/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:41:15 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/17 23:57:34 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[i2] && i2 < size - 1)
	{
		dst[i2] = src[i2];
		i2++;
	}
	dst[i2] = '\0';
	return (i);
}

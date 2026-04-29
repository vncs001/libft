/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:49:38 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/28 17:51:09 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;
	size_t	tam;

	i = 0;
	i2 = 0;
	while (src[i2] != '\0')
		i2++;
	while (dst[i] != '\0')
		i++;
	if (size <= i)
		return (size + i2);
	tam = i + i2;
	i2 = 0;
	while (i < size - 1 && src[i2] != '\0')
	{
		dst[i++] = src[i2++];
	}
	dst[i] = '\0';
	return (tam);
}

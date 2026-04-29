/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:12:32 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/28 17:34:43 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;
	size_t			total;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	total = size * nmemb;
	arr = (unsigned char *)malloc(total);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

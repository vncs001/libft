/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 21:27:39 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/04 17:22:38 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	i2;
	size_t	tam;

	i = 0;
	i2 = 0;
	while (set[i2++])
	{
		if (s1[i] == set[i2])
		{
			i++;
			break ;
		}
	}
	tam = ft_strlen((const char)*s1[i]);
	while (i2-- > 0)
	{
		if (s1[tam - 1] == set[i2])
		{
			tam--;
			break ;
		}
	}
	return (ft_substr(s1, (unsigned int)i, (unsigned int)tam));
}

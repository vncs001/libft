/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:26:30 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/24 11:35:11 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*arr_s1;
	unsigned char	*arr_s2;

	i = 0;
	arr_s1 = (unsigned char *)s1;
	arr_s2 = (unsigned char *)s2;
	if (n < 1)
		return (0);
	while ((i < n - 1) && arr_s1[i] != '\0'
		&& arr_s2[i] != '\0' && arr_s2[i] == arr_s1[i])
		i++;
	if (arr_s1[i] == arr_s2[i])
		return (0);
	return (arr_s1[i] - arr_s2[i]);
}

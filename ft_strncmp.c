/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:18:21 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/24 11:34:31 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while ((i < n - 1) && s1[i] != '\0' && s2[i] != '\0' && s2[i] == s1[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

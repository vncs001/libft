/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:12:16 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/15 11:19:21 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)s;
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	str[i] = '\0';
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:41:15 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/23 17:37:33 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (src[i] != '\0')
		i++;
	if (i == 0)
		return (i);
	while (src[i2] != '\0' && i2 < size - 1)
	{
		dest[i2] = src[i2];
		i2++;
	}
	dest[i2] = '\0';
	return (i);
}

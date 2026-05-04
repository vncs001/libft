/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:26:50 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/03 21:59:34 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int	main(){
// 	printf("%zu", ft_strlen(""));
// 	printf("%zu", ft_strlen("abc"));
// }
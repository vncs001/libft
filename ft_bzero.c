/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:38:27 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/28 17:34:39 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	arr = (unsigned char *)s;
	i = 0;
	while (i < n)
		arr[i++] = '\0';
}

// #include <stdio.h>
// int main() {
//    char str[50];
//    ft_memset(str, '.', 9);
//    str[49] = '\0';
//    printf("%s\n", str);
//    return 0;
// }
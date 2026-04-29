/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:37:17 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/28 17:33:07 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)str;
	while (i < n)
		arr[i++] = (unsigned char)c;
	return (str);
}

// #include <stdio.h>
// int main() {
//    char str[50];
//    ft_memset(str, '.', 9);
//    str[49] = '\0';
//    printf("%s\n", str);
//    return 0;
// }
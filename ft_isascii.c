/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:09:50 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/18 00:02:02 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('9'));
// 	printf("%d\n", ft_isascii('$'));
// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii(' '));
// }
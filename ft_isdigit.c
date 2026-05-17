/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:46:04 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/18 00:00:55 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", ft_isdigit('9'));
// 	printf("%d\n", ft_isdigit('$'));
// 	printf("%d\n", ft_isdigit('0'));
// }
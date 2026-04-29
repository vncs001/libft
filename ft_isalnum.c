/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:55:24 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/28 17:32:27 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int an)
{
	if ((an >= 65 && an <= 90)
		|| (an >= 97 && an <= 122)
		|| (an >= 48 && an <= 57))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('$'));
// 	printf("%d\n", ft_isalnum('0'));
// }
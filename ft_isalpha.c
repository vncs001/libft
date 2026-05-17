/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:31:13 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/18 00:00:27 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha(97));
// 	printf("%d\n", ft_isalpha('$'));
// 	printf("%d\n", ft_isalpha(95));
// }
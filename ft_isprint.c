/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:18:38 by vaugusto          #+#    #+#             */
/*   Updated: 2026/04/22 11:22:52 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int p)
{
	if (p >= 32 && p <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_isprint(31));
// 	printf("%d\n", ft_isprint(127));
// 	printf("%d\n", ft_isprint(56));
// 	printf("%d\n", ft_isprint(84));
// }
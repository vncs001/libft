/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:58:06 by vaugusto          #+#    #+#             */
/*   Updated: 2026/05/06 20:20:24 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_wordconter(char const *s, char c)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			i2++;
		i++;
	}
	return (i2 + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_final;
	size_t	i;
	size_t	i2;
	size_t	checkpoint;

	arr_final = (char **)malloc(sizeof(char **) * (ft_wordconter(s, c) + 1));
	if (!arr_final)
		return (NULL);
	i = -1;
	i2 = 0;
	checkpoint = 0;
	while (s[++i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		checkpoint = i;
		while (s[i] != c)
			i++;
		arr_final[i2] = (char *)malloc(i - checkpoint + 1);
		if (!arr_final[i2])
			return (NULL);
		arr_final[i2++] = (char *)ft_substr(s, checkpoint, i - checkpoint);
	}
	arr_final[i2] = NULL;
	return (arr_final);
}

// #include <stdio.h>

// int	main()
// {
// 	char	**qualquer = ft_split("ola,como,voce,esta", ',');
// 	int	i = 0;
// 	while (qualquer[i])
// 	{
// 		printf("%s\n", qualquer[i]);
// 		i++;
// 	}
// }
// s = "ola,como,voce,esta";
// c = ',';
//--------------------------
// size_t	i;
// size_t	i2;
// size_t	checkpoint;
// char	**arr_final;

// i = 0;
// i2 = 0;
// checkpoint = i;
// while (s[i])
// {
// 	if (s[i] == c)
// 	{
// 		arr_final[i2] = ft_substr(s, checkpoint, i);
// 		checkpoint = i;
// 	}
// 	i++;
// }
// return (arr_final);
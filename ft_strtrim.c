/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:16:07 by ajenah            #+#    #+#             */
/*   Updated: 2026/11/02 17:46:07 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	char	*arr;

	arr = 0;
	if (s1 && set)
	{
		x = 0;
		y = ft_strlen(s1);
		while (s1[x] && ft_strchr(set, s1[x]))
			x++;
		while (y > x && s1[y - 1] && ft_strchr(set, s1[y - 1]))
			y--;
		arr = (char *)malloc(y - x + 1);
		if (!arr)
			return (NULL);
		if (arr)
			ft_strlcpy(arr, &s1[x], y - x + 1);
	}
	return (arr);
}

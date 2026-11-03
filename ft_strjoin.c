/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:35:24 by ajenah            #+#    #+#             */
/*   Updated: 2026/11/02 14:30:05 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	arr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!arr)
		return (NULL);
	x = 0;
	while (s1[x])
	{
		arr[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y])
		arr[x++] = s2[y++];
	arr[x] = '\0';
	return (arr);
}

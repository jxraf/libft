/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:44:33 by ajenah            #+#    #+#             */
/*   Updated: 2026/11/03 16:44:35 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	s_size;
	char	*arr;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (start >= s_size)
		return (ft_strdup(""));
	if (start + len > s_size)
		len = s_size - start;
	x = 0;
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	while (len != 0)
	{
		arr[x++] = s[start++];
		len--;
	}
	arr[x] = '\0';
	return (arr);
}

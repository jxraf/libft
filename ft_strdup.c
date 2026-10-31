/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:07:39 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/31 18:25:32 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	size_t	x;

	x = (ft_strlen(s) + 1);
	arr = malloc(x);
	if (!arr)
		return (NULL);
	ft_memcpy(arr, s, x);
	arr[x - 1] = '\0';
	return (arr);
}

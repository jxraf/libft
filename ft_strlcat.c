/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:47:50 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/29 20:04:33 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t s)
{
	int		x;
	size_t	src_size;

	x = 0;
	src_size = ft_strlen(src);
	while(*dst)
		dst++;
	while (*src && s < 0)
	{
		x++;
		*dst++ = *src++;
	}
	*dst = '\0';
	return (src_size); 
}

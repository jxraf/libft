/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:48:22 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/30 18:59:33 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*ch;

	x = 0;
	ch = (unsigned char *)s;
	while (x < n && ch[x] != (char)c)
		x++;
	if (x == n)
		return (NULL);
	return (ch + x);
}

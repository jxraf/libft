/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:49:32 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/21 10:58:59 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*y;
	size_t			x;

	y = (unsigned char *) dest;
	x = 0;
	while (x < count)
	{
		y[x] = (unsigned char)c;
		x++;
	}
	return (dest);
}

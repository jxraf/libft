/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:51:37 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/31 18:18:52 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	size_t		x;
	char		*y;
	const char	*z;

	x = 0;
	y = (char *)to;
	z = (const char *)from;
	while (x < n)
	{
		y[x] = z[x];
		x++;
	}
	return (to);
}

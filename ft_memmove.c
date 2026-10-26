/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 20:19:53 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/25 20:28:11 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*y;
	const char	*z;

	y = (char *)dest;
	z = (const char *)src;
	if (!y && !z)
		return (NULL);
	if (y >= z)
	{
		while (n > 0)
		{
			n--;
			y[n] = z[n];
		}
	}
	else
	{
		while (n > 0)
		{
			*y++ = *z++;
			n--;
		}
	}
	return (dest);
}

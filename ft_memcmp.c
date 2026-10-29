/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 09:43:03 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/28 15:37:41 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sr1;
	const unsigned char	*sr2;
	size_t				x;

	x = 0;
	sr1 = (const unsigned char *)s1;
	sr2 = (const unsigned char *)s2;
	while (x < n)
	{
		if (sr1[x] != sr2[x])
			return (sr1[x] - sr2[x]);
		x++;
	}
	return (0);
}

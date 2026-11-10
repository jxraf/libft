/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:46:11 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/31 15:30:50 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (lil[0] == '\0')
		return ((char *)big);
	while (x < n && big[x])
	{
		y = 0;
		while (x + y < n && big[x + y] == lil[y] && lil[y])
			y++;
		if (lil[y] == '\0')
			return ((char *)big + x);
		x++;
	}
	return (NULL);
}

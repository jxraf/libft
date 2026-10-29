/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:38:40 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/27 18:28:30 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	while (str[x] != (char)ch)
	{
		if (x == 0)
			return (NULL);
		x--;
	}
	return ((char *)str + x);
}

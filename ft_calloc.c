/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:36:29 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/31 18:20:51 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	if (nmemb && size && (nmemb > SIZE_MAX / size))
		return (NULL);
	pt = malloc(nmemb * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, (nmemb * size));
	return (pt);
}

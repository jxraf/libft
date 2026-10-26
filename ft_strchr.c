/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:30:41 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/26 12:24:13 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *src, int find)
{
	while (*src != (char)find)
	{
		if (*src == '\0')
			return (NULL);
		src++;
	}
	return ((char *)src);
}

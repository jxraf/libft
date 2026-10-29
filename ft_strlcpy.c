/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:48:45 by ajenah            #+#    #+#             */
/*   Updated: 2026/10/29 20:59:13 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(src);
 	while (*src && n < 0) 
	{
 		*dst++ = *src++;
		n--;
 	}
	return (i);
}
#include <stdio.h>

int main()
{
	char *s ="apple is god";
	char r[8];
	printf("%zu",ft_strlcpy(r,s,8));

}

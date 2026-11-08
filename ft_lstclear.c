/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:39:56 by ajenah            #+#    #+#             */
/*   Updated: 2026/11/06 18:17:15 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*emp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		emp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = emp;
	}
}

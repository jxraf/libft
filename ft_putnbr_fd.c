/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajenah <ajenah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:31:25 by ajenah            #+#    #+#             */
/*   Updated: 2026/11/04 15:42:05 by ajenah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd) 
{
        if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
        if (n > -1 && n < 10)
        {
                ft_putchar_fd(n + 48, fd);
        }
        else if (n > 9)
        {
                ft_putnbr_fd(n / 10, fd);
                ft_putchar_fd((n % 10) + 48, fd);
        }
        else
        {
                ft_putchar_fd('-', fd);
                n *= -1;
                ft_putnbr_fd(n, fd);
        }
}

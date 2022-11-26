/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:58:05 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/26 02:41:24 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
}
/*
// copies int into a fd output // more info check ft_putchar.fd.c comments
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd = creat("1.txt",0644);
	int uno = (-2147483647 -1);
	ft_putnbr_fd(uno, fd);
	//-2147483648
	// int i = (-2147483647 -1);
	// char buff[0xF0];

	// fd_to_buffer(2);
	// ft_putnbr_fd(i, 2);
	// write(2, "", 1);
	// get_fd_buffer(2, buff, 0xF0);
	// if (atoi(buff) == i)
	// 	exit(TEST_SUCCESS);
	// exit(TEST_FAILED);

}

*/

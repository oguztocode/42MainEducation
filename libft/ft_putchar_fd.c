/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:24:03 by ogozturk          #+#    #+#             */
/*   Updated: 2022/01/15 16:24:06 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<fcntl.h> 
void	ft_putchar_fd(char c, int fd)
{
	if (!fd)
		return ;
	write(fd, &c, 1);
}
/*
int	main()
{
	int fd = open("txt.txt",O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('B', fd);
}*/

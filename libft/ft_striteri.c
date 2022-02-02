/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:35:41 by ogozturk          #+#    #+#             */
/*   Updated: 2022/01/15 16:35:58 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
void to_lower(unsigned int a,char *b)
{
	*b = *b + 5;
}


int	main()
{
 	char s[] = "ABC";
   	ft_striteri(s,to_lower);
	printf("---->\n%s\n<----",s);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:45:32 by ogozturk          #+#    #+#             */
/*   Updated: 2022/01/15 16:45:43 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i <= n)
	{
		if (s1[i] == 0 && s2[i] != 0)
			return (-1);
		if (n != 0)
		{
			while (i < (n - 1) && s1[i] != '\0'
				&& s2[i] != '\0' && s1[i] == s2[i])
				i++;
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

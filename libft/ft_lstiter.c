/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:10:04 by ogozturk          #+#    #+#             */
/*   Updated: 2022/01/15 16:10:07 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{	
	t_list	*tmp;

	if (!f || !lst)
		return ;
	while (lst)
	{
		tmp = lst->next;
		f(lst->content);
		lst = tmp;
	}
}

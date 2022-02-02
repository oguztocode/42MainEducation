/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:13:34 by ogozturk          #+#    #+#             */
/*   Updated: 2022/01/15 16:13:37 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*return_list;
	t_list	*no;

	return_list = 0;
	while (lst)
	{
		no = ft_lstnew(f(lst->content));
		if (!no)
		{
			ft_lstclear(&return_list, del);
			return (NULL);
		}
		ft_lstadd_back(&return_list, no);
		lst = lst->next;
	}
	return (return_list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   links.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:38:13 by rburger           #+#    #+#             */
/*   Updated: 2017/11/28 15:28:21 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char		*get_link(t_g *all, char *str)
{
	char	*ret;

	ret = NULL;
	while (all->links->next && ret == NULL)
	{
		if (ft_strcmp(str, all->links->arr[0]) == 0)
			ret = all->links->arr[1];
		else if (ft_strcmp(str, all->links->arr[1]) == 0)
			ret = all->links->arr[0];
		all->links = all->links->next;
	}
	return (ret);
}

char		**links(t_g *all, char *test)
{
	char		**arr;
	t_links		*head;
	int			i;

	i = 0;
	head = all->links;
	while ((get_link(all, test)) != NULL)
		i++;
	all->links = head;
	if (!(arr = (char**)ft_memalloc(sizeof(char*) * (i + 1))))
		return (NULL);
	i = 0;
	while ((arr[i] = get_link(all, test)))
		i++;
	arr[i] = 0;
	all->links = head;
	return (arr);
}

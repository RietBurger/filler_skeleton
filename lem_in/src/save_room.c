/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:40:17 by rburger           #+#    #+#             */
/*   Updated: 2017/11/27 16:54:16 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char		*save_room(char *str)
{
	char	*room;
	size_t	i;

	i = 0;
	while (str[i] != ' ')
		i++;
	room = (char *)ft_memalloc(sizeof(char) * (i + 1));
	ft_strncpy(room, str, i);
	return (room);
}

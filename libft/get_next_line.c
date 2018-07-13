/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 10:47:49 by rburger           #+#    #+#             */
/*   Updated: 2017/11/16 14:24:33 by rburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_read_buffer(int const fd, char **line)
{
	char	*buff;
	int		counter;
	char	*temp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	counter = read(fd, buff, BUFF_SIZE);
	if (counter > 0)
	{
		buff[counter] = '\0';
		temp = ft_strjoin(*line, buff);
		free(*line);
		*line = temp;
	}
	return (counter);
}

int			get_next_line(int const fd, char **line)
{
	static char	*str;
	char		*newl;
	int			count;

	if ((!str && (str = (char *)malloc(sizeof(*str))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	newl = ft_strchr(str, '\n');
	while (newl == NULL)
	{
		count = ft_read_buffer(fd, &str);
		if (count == 0)
		{
			if (ft_strlen(str) == 0)
				return (0);
			str = ft_strjoin(str, "\n");
		}
		if (count < 0)
			return (-1);
		else
			newl = ft_strchr(str, '\n');
	}
	*line = ft_strsub(str, 0, ft_strlen(str) - ft_strlen(newl));
	str = ft_strdup(newl + 1);
	return (1);
}

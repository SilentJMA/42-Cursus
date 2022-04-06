/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:17:29 by mjabane           #+#    #+#             */
/*   Updated: 2022/04/05 22:23:28 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_free(char *a)
{
	free(a);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	buffer[1025][BUFFER_SIZE + 1];
	char		*text;
	int			i;

	i = 1;
	text = NULL;
	if (fd < 0 || BUFFER_SIZE == 0)
		return (0);
	if (ft_search(buffer[fd], '\n') != -1)
	{
		ft_cut(buffer[fd]);
		text = ft_strjoin(text, buffer[fd]);
		if (text[0] == '\0')
				text = ft_free(text);
	}
	while (ft_search(buffer[fd], '\n') == -1 && i > 0)
	{
		i = read(fd, buffer[fd], BUFFER_SIZE);
		if (i <= 0)
			return (text);
		buffer[fd][i] = '\0';
		text = ft_strjoin(text, buffer[fd]);
	}
	return (text);
}

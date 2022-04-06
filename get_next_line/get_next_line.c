/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:39:36 by mjabane           #+#    #+#             */
/*   Updated: 2022/04/04 19:42:28 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *a)
{
	free(a);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*text;
	int			i;

	i = 1;
	text = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 4096)
		return (0);
	if (ft_search(buffer, '\n') != -1)
	{
		ft_cut(buffer);
		text = ft_strjoin(text, buffer);
		if (text[0] == '\0')
				text = ft_free(text);
	}
	while (ft_search(buffer, '\n') == -1 && i > 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i <= 0)
			return (text);
		buffer[i] = '\0';
		text = ft_strjoin(text, buffer);
	}
	return (text);
}

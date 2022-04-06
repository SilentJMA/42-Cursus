/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:39:14 by mjabane           #+#    #+#             */
/*   Updated: 2022/04/04 22:29:18 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	//char	*line ;

	fd = open("text", O_RDONLY | O_CREAT);

	printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// while (1)
	// {
	// 	line = get_next_line(fd);
	// 	printf("%s", line);
	// 	if (!line)
	// 		break ;
	// }
	// free(line);
	return (0);
}

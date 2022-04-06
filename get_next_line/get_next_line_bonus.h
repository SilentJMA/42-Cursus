/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:19:48 by mjabane           #+#    #+#             */
/*   Updated: 2022/04/05 22:20:38 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);
int		ft_strlen(char *a);
int		ft_strlenn(char *a);
char	*ft_strjoin(char *a, char *b);
int		ft_search(char *a, char c);
void	ft_cut(char *a);

#endif

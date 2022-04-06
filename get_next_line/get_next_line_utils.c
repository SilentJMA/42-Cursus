/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:32:24 by mjabane           #+#    #+#             */
/*   Updated: 2022/04/04 19:28:38 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a && a[i])
		i++;
	return (i);
}

int	ft_strlenn(char *a)
{
	int	i;

	i = 0;
	while (a && a[i] && a[i] != '\n')
		i++;
	if (a && a[i] && a[i] == '\n')
		i++;
	return (i);
}

int	ft_search(char *a, char c)
{
	int	i;

	i = 0;
	while (a[i] && a[i] != c)
		i++;
	if (a[i] == c)
		return (i);
	return (-1);
}

void	ft_cut(char *a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a[i] && a[i] != '\n')
		i++;
	if (a[i] == '\n')
		i++;
	while (j < BUFFER_SIZE - i)
	{
		a[j] = a[j + i];
		j++;
	}
	a[j] = '\0';
}

char	*ft_strjoin(char *a, char *b)
{
	int		i;
	int		j;
	char	*s;

	i = ft_strlen(a);
	j = ft_strlenn(b);
	s = malloc(i + j + 1);
	if (s)
	{
		i = -1;
		j = -1;
		while (a && a[++i])
			s[i] = a[i];
		if (i == -1)
			i = 0;
		while (b && b[++j] && b[j] != '\n')
			s[i + j] = b[j];
		s[i + j] = b[j];
		if ((b && b[j] && b[j] == '\n') || j == -1)
			j++;
		s[i + j] = '\0';
	}
	free(a);
	return (s);
}

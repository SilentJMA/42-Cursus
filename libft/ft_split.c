/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:31:42 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/24 09:57:47 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

static int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
		j++;
	}
	return (j);
}

static char	*ft_strdupp(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((j + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (i < j && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char		**dest;
	int			size;
	int			i;
	int			j;
	char		charset[2];

	charset[0] = c;
	charset[1] = '\0';
	i = 0;
	size = ft_wordcount((char *)s, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (ft_is_charset((char)*s, charset))
			s++;
		j = ft_wordlen((char *)s, charset);
		dest[i] = ft_strdupp((char *)s, j);
		s += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:30:56 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/05 18:34:28 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		count;

	count = 0;
	str = (const char *)s;
	while (count < n)
	{
		if (str[count] == (const char) c)
			return ((void *)&str[count]);
		count++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:19:50 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/05 21:19:54 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l2;

	if ((int)len == -1 && ft_strlen(haystack) == 0 && ft_strlen(needle) != 0)
		return (0);
	if (len < 0)
		return (0);
	l2 = ft_strlen(needle);
	if (!l2)
		return ((char *)haystack);
	while (len-- >= l2)
	{
		if (!ft_memcmp(haystack, needle, l2))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

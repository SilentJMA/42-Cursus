/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:19:50 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/23 19:10:23 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*oneedle;
	const char	*save_haystack;
	size_t		save_len;

	oneedle = needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *haystack)
	{
		if (*haystack == *needle)
		{
			save_haystack = haystack;
			save_len = len;
			while ((*haystack++ == *needle++) && (len-- != 0))
				if (*needle == 0)
					return ((char *)save_haystack);
			haystack = save_haystack;
			len = save_len;
			needle = oneedle;
		}
		len--;
		haystack++;
	}
	return (0);
}

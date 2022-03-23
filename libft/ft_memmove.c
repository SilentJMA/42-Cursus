/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:57:05 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/23 19:10:38 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = dst;
	s = (char *)src;
	i = -1;
	if (!dst && !src)
		return (NULL);
	if (d < s)
		while (++i < len)
			d[i] = s[i];
	else
		while (len-- > 0)
			d[len] = s[len];
	return (dst);
}

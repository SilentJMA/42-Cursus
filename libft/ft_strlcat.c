/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:28:40 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/05 21:33:46 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_size;

	dest_size = ft_strlen(dst);
	if (dstsize <= dest_size)
		return (dstsize + ft_strlen(src));
	i = -1;
	if (dstsize > 0)
		while (src[++i] && dest_size + i < dstsize - 1)
			dst[dest_size + i] = src[i];
	dst[dest_size + i] = '\0';
	return (ft_strlen(src) + dest_size);
}

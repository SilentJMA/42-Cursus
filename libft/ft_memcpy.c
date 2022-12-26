/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:56:46 by mjabane           #+#    #+#             */
/*   Updated: 2022/12/14 17:55:09 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*char_dst;
	unsigned char	*char_src;

	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	if ((n != 0) && (src != dst))
	{
	i = 0;
		while (i < n)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}

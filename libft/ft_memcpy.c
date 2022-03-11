/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:56:46 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/07 08:26:48 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ptr;
	unsigned char		*src_ptr;
	size_t				count;

	count = 0;
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	if ((n != 0) && (dst != src))
	{
		while (count < n)
		{
			*dst_ptr = *src_ptr;
			dst_ptr++;
			src_ptr++;
			count++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
 int main () {
	const char src[50] = "Sokobiso Kiso";
	char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
} */

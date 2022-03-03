/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:15:55 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/03 10:50:43 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = b;
	i = 0;
	while (i < len)
		*(str + i++) = c;
	return (b);
}

/*
#include <stdio.h>
#include <string.h>
int main () {
   char str[50];

   strcpy(str,"Sokobiso Kiso");
   puts(str);

   ft_memset(str,'+',7);
   puts(str);

   return(0);
}
*/

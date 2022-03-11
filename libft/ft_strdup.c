/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:08:51 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/07 08:40:07 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*ptr;
	char	*tmp;

	size = ft_strlen(s1);
	ptr = malloc(size + 1);
	tmp = ptr;
	if (ptr == 0)
		return (ptr);
	while (*s1)
		*ptr++ = *s1++;
	*ptr = '\0';
	return (tmp);
}

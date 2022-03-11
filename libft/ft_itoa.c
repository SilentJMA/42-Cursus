/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:39:00 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/09 19:27:51 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_alloc(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*fnl;
	int				size;
	unsigned int	nb;

	size = ft_alloc(n) + 1;
	fnl = (char *)malloc(size * sizeof(char));
	if (!fnl)
		return (NULL);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	fnl[--size] = 0;
	while (--size >= 0 && nb)
	{
		fnl[size] = '0' + nb % 10;
		nb /= 10;
	}
	if (n < 0)
		fnl[0] = '-';
	if (n == 0)
		fnl[0] = '0';
	return (fnl);
}

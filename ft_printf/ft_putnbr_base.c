/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:07:03 by mjabane           #+#    #+#             */
/*   Updated: 2023/02/19 11:03:21 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_base(char *base, char c)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (base[n])
		if (base[n++] == c)
			i++;
	if (i >= 2)
		return (0);
	return (1);
}

static int	ft_strprint(unsigned int n, char *base, unsigned int size)
{
	int	t;

	t = 0;
	if (n > size - 1)
	{
		t += ft_strprint(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
	t++;
	return (t);
}

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int	n;
	int	t;

	t = 0;
	n = -1;
	while (base[++n])
		if ((base[n] == '-' || base[n] == '+' || !ft_check_base(base, base[n])))
			return (t);
	if (n < 2)
		return (t);
	else
		t += ft_strprint(nbr, base, n);
	return (t);
}

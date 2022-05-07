/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:07:03 by mjabane           #+#    #+#             */
/*   Updated: 2022/05/07 17:56:36 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int	t;

	t = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		t += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		t += ft_putnbr(n / 10);
	t += ft_putchar(n % 10 + '0');
	return (t);
}

unsigned int	ft_putnbr_u(unsigned int n)
{
	int	t;

	t = 0;
	if (n > 9)
		t += ft_putnbr(n / 10);
	t += ft_putchar(n % 10 + '0');
	return (t);
}

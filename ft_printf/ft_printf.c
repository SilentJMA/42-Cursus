/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:25:01 by mjabane           #+#    #+#             */
/*   Updated: 2022/05/07 17:57:18 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_value(const char *str, va_list ap, int i, int j)
{
	unsigned long long	p;

	if (str[i] == 'p')
		p = va_arg(ap, unsigned long long);
	if (str[i] == 'd' || str[i] = 'i')
		j += ft_putnbr(va_arg(ap, int));
	else if (str[i] == 's')
		j += ft_putstr(va_arg(ap, char *));
	else if (str[i] == 'c')
		j += ft_putchar(va_arg(ap, int));
	else if (str[i] == 'p')
		j += ft_putmem(&p, "0123456789abcdef");
	else if (str[i] == 'u')
		j += ft_putnbr_u(va_arg(ap, unsigned int));
	else if (str[i] == 'x')
		j += ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	else if (str[i] == 'X')
		j += ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	else if (str[i] == '%')
		j += ft_putchar('%');
	return (j);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		j;

	j = 0;
	i = -1;
	va_start(ap, str);
	while (str[++i])
	{
		if (str[++i])
			j += ft_value(str, ap, ++i, 0);
		else
			j += ft_putchar(str[i]);
	}
	va_end(ap);
	return (j);
}

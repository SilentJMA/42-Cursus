/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/07 12:05:13 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(char c, va_list cp, int *s)
{
	if (c == '%')
		*s += ft_putchar('%');
	else if (c == 'd' || c == 'i')
		*s += ft_putnbr(va_arg(cp, int));
	else if (c == 'c')
		*s += ft_putchar(va_arg(cp, int));
	else if (c == 's')
		*s += ft_putstr(va_arg(cp, char *));
	else if (c == 'x')
		*s += ft_hexa(va_arg(cp, unsigned int), 1);
	else if (c == 'X')
		*s += ft_hexa(va_arg(cp, unsigned int), 0);
	else if (c == 'p')
	{
		ft_putstr("0x");
		*s += 2;
		*s += ft_hexa(va_arg(cp, unsigned long), 1);
	}
	else if (c == 'u')
		*s += ft_unsigned_int(va_arg(cp, unsigned int));
	else
		*s += ft_putchar(c);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	cp;

	i = 0;
	va_start(cp, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (i);
			print(*format, cp, &i);
		}
		else
		{
			ft_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(cp);
	return (i);
}

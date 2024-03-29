/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:07:03 by mjabane           #+#    #+#             */
/*   Updated: 2023/02/19 11:03:29 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	n;

	n = 0;
	if (s == NULL)
		n += ft_putstr("(null)");
	else
		while (s[n])
			ft_putchar(s[n++]);
	return (n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:08:44 by mjabane           #+#    #+#             */
/*   Updated: 2023/02/18 16:58:19 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int				n0;
	int				n1;
	int				n2;
	int				n3;

	n0 = -2147483647;
	n1 = 0;
	n2 = 123456789;
	n3 = -10;
	char name [] = "Test some sokobiso";

	printf("Decimal:\n");
	printf("Libc: %d\n", n0);
	ft_printf("Mine: %d\n\n", n0);
	printf("Libc: %d\n", n1);
	ft_printf("Mine: %d\n\n", n1);
	printf("Libc: %d\n", n2);
	ft_printf("Mine: %d\n\n", n2);
	printf("Libc: %d\n", n3);
	ft_printf("Mine: %d\n\n", n3);

	printf("String:\n");
	printf("Libc: %s\n", name);
	ft_printf("Mine: %s\n\n", name);
	ft_printf("Mine: \n\n", name);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:20:46 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/11 14:23:22 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	signspace(char **str, int *sign)
{
	while ((**str == ' ') || ((**str >= 9) && (**str <= 13)))
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			*sign = -1;
		(*str)++;
	}
}

int	ft_atoi(const char *s)
{
	long long	number;
	int			sign;
	char		*str;

	str = (char *)s;
	sign = 1;
	number = 0;
	signspace(&str, &sign);
	while ((*str >= '0') && (*str <= '9'))
	{
		if (number > 2147483647 / 10 || (number == 2147483647 / 10
				&& *str - '0' > 7))
			if (sign == 1)
				return (-1);
		if (number > 2147483648 / 10 || (number == 2147483648 / 10
				&& *str - '0' > 8))
		{
			if (sign != 1)
				return (0);
		}
		number = 10 * number + (*str - '0');
		str++;
	}
	return (sign * (int)number);
}

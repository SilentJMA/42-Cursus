/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/07 12:05:47 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_table *m, t_int var)
{
	rra(m, var, 0);
	rrb(m, var, 0);
	ft_printf("rrr\n");
}

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}

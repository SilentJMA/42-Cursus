/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/07 12:06:21 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_table *m, t_int var)
{
	if (m->a.used < 2)
		return ;
	var.i = m->a.tab[0];
	var.j = 1;
	while (var.j < m->a.used)
	{
		m->a.tab[(var.j) - 1] = m->a.tab[var.j];
		(var.j)++;
	}
	m->a.tab[var.j - 1] = var.i;
}

void	rb(t_table *m, t_int var)
{
	if (m->b.used < 2)
		return ;
	var.i = m->b.tab[0];
	var.j = 1;
	while (var.j < m->b.used)
	{
		m->b.tab[(var.j) - 1] = m->b.tab[var.j];
		(var.j)++;
	}
	m->b.tab[var.j - 1] = var.i;
}

void	rr(t_table *m, t_int var)
{
	ra(m, var);
	rb(m, var);
}

void	rra(t_table *m, t_int var)
{
	if (m->a.used < 2)
		return ;
	var.i = m->a.tab[(m->a.used) - 1];
	var.j = (m->a.used) - 1;
	while (var.j != 0)
	{
		(var.j)--;
		m->a.tab[(var.j) + 1] = m->a.tab[var.j];
	}
	m->a.tab[var.j] = var.i;
}

void	rrb(t_table *m, t_int var)
{
	if (m->b.used < 2)
		return ;
	var.i = m->b.tab[(m->b.used) - 1];
	var.j = (m->b.used) - 1;
	while (var.j != 0)
	{
		(var.j)--;
		m->b.tab[(var.j) + 1] = m->b.tab[var.j];
	}
	m->b.tab[var.j] = var.i;
}

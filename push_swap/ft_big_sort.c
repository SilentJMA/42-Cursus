/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/07 12:04:53 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorted_tab(int *tab, int size)
{
	t_int	var;

	var.i = 0;
	while (var.i < size - 1)
	{
		if (tab[var.i] > tab[(var.i) + 1])
			return (0);
		(var.i)++;
	}
	return (1);
}

void	ft_sort(int *tab, int size)
{
	t_int	var;

	while (ft_check_sorted_tab(tab, size) != 1)
	{
		var.i = 0;
		while (var.i < size - 1)
		{
			if (tab[var.i] > tab[var.i + 1])
			{
				var.j = tab[var.i];
				tab[var.i] = tab[var.i + 1];
				tab[var.i + 1] = var.j;
			}
			(var.i)++;
		}
	}
}

int	*ft_copy(t_table *m)
{
	int		*tmp;
	t_int	var;

	var.i = 0;
	tmp = (int *)malloc(m->a.used * sizeof(int));
	while (var.i < m->a.used)
	{
		tmp[var.i] = m->a.tab[var.i];
		(var.i)++;
	}
	return (tmp);
}

void	ft_big_sort(t_table *m, int div)
{
	int		*tab;
	t_int	var;

	while (m->a.used != 1)
	{
		tab = ft_copy(m);
		ft_sort(tab, m->a.used);
		var.pivot_3 = (m->a.used) / div;
		var.pivot_2 = var.pivot_3 / 2;
		var.j = 0;
		var.p = 0;
		ft_big_sort2(m, &var, tab);
		free(tab);
	}
	while (m->a.used != m->a.size)
		ft_send(m);
	ft_free_stack(m);
}

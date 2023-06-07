/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/07 12:06:11 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_free_stack_bonus(t_table *m)
{
	free(m->a.tab);
	free(m->b.tab);
}

int	ft_check_sorted_bonus(t_table *m)
{
	t_int	var;

	var.i = 0;
	if (m->b.used != 0)
		return (0);
	while (var.i < m->a.used - 1)
	{
		if (m->a.tab[var.i] > m->a.tab[(var.i) + 1])
			return (0);
		(var.i)++;
	}
	return (1);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

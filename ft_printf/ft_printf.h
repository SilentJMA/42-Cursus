/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:25:30 by mjabane           #+#    #+#             */
/*   Updated: 2022/05/07 17:57:21 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putnbr(int n);
unsigned int	ft_putnbr_u(unsigned int n);
int				ft_putnbr_base(unsigned int nbr, char *base);
int				ft_putstr(char *s);
int				ft_putchar(char c);
int				ft_putmem(unsigned long long *t, char *table);

#endif

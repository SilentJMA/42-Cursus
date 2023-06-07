/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/07 12:36:38 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	message_sent(int i)
{
	(void)i;
	ft_putstr("\033[0;32m******************\n");
	ft_putstr("\033[0;32m*\033[0;35m MESSAGE Sent!!\033[0;32m *\n");
	ft_putstr("\033[0;32m******************\n");
	exit(1);
}

void	send_signals(char *message, int pid)
{
	int	shift;
	int	i;

	shift = -1;
	i = 0;
	while (1)
	{
		while (++shift < 8)
		{
			if ((message[i] & (0x80 >> shift)) == 0)
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(1);
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					exit(1);
			}
			usleep(900);
		}
		if (!message[i++])
			break ;
		shift = -1;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac != 3)
	{
		ft_putstr("\033[0;31mERROR : MUST BE 3 Arguments !!\n");
		exit(1);
	}
	pid = ft_atoi(av[1]);
	if (pid < 1)
		exit(1);
	signal(SIGUSR1, message_sent);
	send_signals(av[2], pid);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:27:45 by mjabane           #+#    #+#             */
/*   Updated: 2023/06/10 13:51:58 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static	void	hundler_sigusrs(int signum, siginfo_t *info, void *test)
{
	static char	c;
	static int	bits;
	static int	pid;

	(void)test;
	if (pid != info->si_pid)
	{
		c = 0xFF;
		bits = 0;
		pid = 0;
	}
	if (signum == SIGUSR1)
		c ^= 0x80 >> bits;
	else if (signum == SIGUSR2)
		c |= 0x80 >> bits;
	bits++;
	if (bits == 8)
	{
		ft_putchar(c);
		if (c == '\0')
			kill(pid, SIGUSR1);
		bits = 0;
		c = 0xFF;
	}
	pid = info->si_pid;
}

int	main(void)
{
	struct sigaction	sa;
	int					sig_return;

	sa.sa_sigaction = &hundler_sigusrs;
	sa.sa_flags = SA_SIGINFO;
	sig_return = sigaction(SIGUSR1, &sa, NULL);
	if (sig_return == -1)
		exit(1);
	sig_return = sigaction(SIGUSR2, &sa, NULL);
	if (sig_return == -1)
		exit(1);
	ft_putstr("PID : ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	while (1)
		pause();
}

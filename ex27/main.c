/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 22:26:45 by bhamdi            #+#    #+#             */
/*   Updated: 2016/12/03 22:28:42 by bhamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

int	main(int ac, char **av)
{
	char	tab[BUF_SIZE];
	int		fd;
	int		i;

	if (ac == 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(av[1], O_RDONLY);
		i = read(fd, tab, 4096);
		write(1, tab, i);
		close(fd);
	}
	return (0);
}

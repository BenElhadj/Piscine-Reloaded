/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:15:34 by bhamdi            #+#    #+#             */
/*   Updated: 2016/11/20 19:36:07 by bhamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 2;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb >= 4)
	{
		while ((sqrt * sqrt) <= nb)
		{
			if ((sqrt * sqrt) == nb)
				return (sqrt);
			sqrt++;
		}
		return (0);
	}
	else
		return (0);
}

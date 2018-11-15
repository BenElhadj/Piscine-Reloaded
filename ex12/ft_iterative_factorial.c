/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:55:00 by bhamdi            #+#    #+#             */
/*   Updated: 2016/11/27 18:14:24 by bhamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int mul;
	int result;

	if (nb >= 0 && nb <= 12)
	{
		mul = 1;
		result = 1;
		while (mul <= nb)
		{
			result *= mul;
			mul++;
		}
		return (result);
	}
	else
		return (0);
}

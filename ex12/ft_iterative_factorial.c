/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:52:16 by mhasan            #+#    #+#             */
/*   Updated: 2019/10/15 16:02:05 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	res;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}

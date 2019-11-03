/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:44:16 by mhasan            #+#    #+#             */
/*   Updated: 2019/10/17 15:55:21 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			++count;
		++i;
	}
	return (count);
}
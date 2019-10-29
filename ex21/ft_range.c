/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:33:30 by mhasan            #+#    #+#             */
/*   Updated: 2019/10/16 17:24:25 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*ret;

	if (min >= max)
	{
		ret = NULL;
		return (ret);
	}
	range = ((max--) - min);
	ret = (int*)malloc(sizeof(*ret) * range);
	i = 0;
	while (i < range)
	{
		ret[i] = min++;
		i++;
	}
	return (ret);
}

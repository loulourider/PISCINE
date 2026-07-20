/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 18:55:43 by username          #+#    #+#             */
/*   Updated: 2026/07/19 12:39:06 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	dist(int min, int max)
{
	int	result;

	result = max - min;
	if (result < 0)
	{
		return (result * -1);
	}
	else
	{
		return (result);
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(dist(min, max) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (dist(min, max));
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	int	*tab;

// 	printf("%d  ", ft_ultimate_range(&tab, 60, 7));
// 	while (i != 10)
// 	{
// 		printf("%d  ", tab[i]);
// 		i++;
// 	}
// }

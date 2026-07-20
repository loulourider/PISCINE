/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 19:14:41 by username          #+#    #+#             */
/*   Updated: 2026/07/09 11:37:39 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tamp;

	tamp = *a;
	*a = *b;
	*b = tamp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 2;
// 	printf("%d %d   ", a, b);
// 	ft_swap(&a, &b);
// 	printf("%d %d", a, b);
// }

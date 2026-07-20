/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 10:05:42 by username          #+#    #+#             */
/*   Updated: 2026/07/09 10:20:01 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 3;
// 	int	div;
// 	int	mod;

// 	// Appel de la fonction ft_div_mod
// 	ft_div_mod(a, b, &div, &mod);
// 	// Affichage des résultats
// 	printf("division de %d par %d donne: %d\n", a, b, div);
// 	printf("modulo de %d par %d donne: %d\n", a, b, mod);
// 	return (0);
// }

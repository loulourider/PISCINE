/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:01:42 by username          #+#    #+#             */
/*   Updated: 2026/07/14 19:03:20 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argrv[])
{
	int		i;
	int		j;
	char	nl;

	nl = '\n';
	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		j = 0;
		while (argrv[i][j] != '\0')
		{
			write(1, &argrv[i][j], 1);
			j++;
		}
		write(1, &nl, 1);
		i--;
	}
}

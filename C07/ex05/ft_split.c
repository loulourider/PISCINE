/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:19:30 by username          #+#    #+#             */
/*   Updated: 2026/07/20 23:20:47 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	iics(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (-1);
}

int	count_w(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (iics(str[i], charset) == -1)
		count++;
	while (str[i] != '\0')
	{
		if (iics(str[i], charset) == 1 && iics(str[i + 1], charset) == -1)
		{
			count = count + 1;
		}
		i++;
	}
	if (iics(str[i - 1], charset) == 1)
	{
		count--;
	}
	return (count);
}

char	*new_word(char *str, int start, int len)
{
	char	*word;
	int		j;

	word = malloc(sizeof(char) * (len + 1));
	j = 0;
	while (j < len)
	{
		word[j] = str[start + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	*mot_i(char *str, char *charset, int i)
{
	int	j;
	int	start;
	int	len;

	j = 0;
	while (i > 0)
	{
		while (iics(str[j], charset) == 1)
			j++;
		while (str[j] != '\0' && iics(str[j], charset) != 1)
			j++;
		i--;
	}
	while (iics(str[j], charset) == 1)
		j++;
	start = j;
	while (str[j] && iics(str[j], charset) != 1)
		j++;
	len = j - start;
	return (new_word(str, start, len));
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (count_w(str, charset) + 1));
	while (i != count_w(str, charset))
	{
		tab[i] = mot_i(str, charset, i);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	int		i;
// 	char	**tab;

// 	i = 0;
// 	tab = ft_split("  abc def hrh;eg ", " ;");
// 	while (tab[i] != NULL)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }

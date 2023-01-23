/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:05:56 by wecorzo-          #+#    #+#             */
/*   Updated: 2022/11/23 17:23:11 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_str_tab(char *tab[], int size)
{
	int		a;
	int		b;
	char	*temp;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (ft_strcmp(tab[a], tab[b]) > 0)
			{
				temp = tab[b];
				tab[b] = tab[a];
				tab[a] = temp;
			}
			b++;
		}
		a++;
	}
}

int	main(int argc, char *argv[])
{
	int	index;

	if (argc > 2)
		ft_sort_str_tab(argv + 1, argc - 1);
	index = 1;
	while (index < argc)
	{
		while (*argv[index])
			write(1, argv[index]++, 1);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}

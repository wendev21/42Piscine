/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:17:07 by wecorzo-          #+#    #+#             */
/*   Updated: 2022/11/23 17:13:41 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		write(1, &str[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 0)
	{
		i = argc -1;
		while (i < argc && i >= 1)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}

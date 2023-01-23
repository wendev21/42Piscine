/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:17:06 by wecorzo-          #+#    #+#             */
/*   Updated: 2022/11/13 13:36:49 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	while (a < size / 2)
	{
		c = tab[a];
		tab[a] = tab[size - b - 1];
		tab[size - b - 1] = c;
		a++;
		b++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:51:26 by wecorzo-          #+#    #+#             */
/*   Updated: 2022/11/21 18:20:49 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
//#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
			i++;
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	s1[] = "abci";
	char	s2[] = "abcu";
	unsigned int	n;

	n = 15;
	printf("result : %d \n", ft_strncmp(s1, s2, n));
	printf("result : %d", strncmp(s1, s2, n));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matruque <matruque@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:31:21 by matruque          #+#    #+#             */
/*   Updated: 2022/11/17 11:13:19 by matruque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (y == 0 && (str[x] >= 'a' && str[x] <= 'z'))
		{
			str[x] -= 'a' - 'A';
			y++;
		}
		else if (y > 0 && (str[x] >= 'A' && str[x] <= 'Z'))
					str[x] += 'a' - 'A';
		else if ((str[x] < '0') || (str[x] > '9' && str[x] < 'A')
			|| (str[x] > 'Z' && str[x] < 'a') || (str[x] > 'z'))
			y = 0;
		else
			y++;
		x++;
	}
	return (str);
}

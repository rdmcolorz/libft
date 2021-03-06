/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 01:24:59 by tyang             #+#    #+#             */
/*   Updated: 2017/12/11 10:14:42 by tyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 'J' && str[i] >= 'A') ||
				(str[i] <= 'j' && str[i] >= 'a'))
			str[i] += 16;
		else if ((str[i] >= 'K' && str[i] <= 'Z') ||
				(str[i] >= 'k' && str[i] <= 'z'))
			str[i] -= 10;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 10:46:16 by tyang             #+#    #+#             */
/*   Updated: 2017/12/09 11:53:43 by tyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while ((*s1 || *s2) && n--)
		{
			if (*s1 != *s2)
				return (0);
			else
			{
				s1++;
				s2++;
			}
		}
		return (1);
	}
	return (0);
}

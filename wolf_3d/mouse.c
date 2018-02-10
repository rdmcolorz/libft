/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 11:44:50 by tyang             #+#    #+#             */
/*   Updated: 2018/02/06 15:32:25 by tyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		exit_hook(t_game *game)
{
	int i;

	i = 0;
	free(game->mlx_ptr);
	free(game->win_ptr);
	while (game->maze[i])
	{
		free(game->maze[i]);
		i++;
	}
	exit(0);
}

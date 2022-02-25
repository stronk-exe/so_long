/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_game_mv_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:33:48 by ael-asri          #+#    #+#             */
/*   Updated: 2022/02/24 18:38:57 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	destroy_window(t_game *my_game)
{
	mlx_destroy_window(my_game->mlx, my_game->win);
	exit(0);
}

void	mv_player_w(t_game *my_game)
{
	mlx_destroy_image(my_game->mlx, my_game->player);
	my_game->player = mlx_xpm_file_to_image(my_game->mlx,
			"imgs/m1.xpm", &my_game->img_w, &my_game->img_h);
	my_game->map[my_game->y_player][my_game->x_player] = 'P';
	my_game->map[my_game->y_player + 1][my_game->x_player] = '0';
}

void	mv_player_s(t_game *my_game)
{
	mlx_destroy_image(my_game->mlx, my_game->player);
	my_game->player = mlx_xpm_file_to_image(my_game->mlx, "imgs/m2.xpm",
			&my_game->img_w, &my_game->img_h);
	my_game->map[my_game->y_player][my_game->x_player] = 'P';
	my_game->map[my_game->y_player - 1][my_game->x_player] = '0';
}

void	mv_player_d(t_game *my_game)
{
	mlx_destroy_image(my_game->mlx, my_game->player);
	my_game->player = mlx_xpm_file_to_image(my_game->mlx,
			"imgs/m1.xpm", &my_game->img_w, &my_game->img_h);
	my_game->map[my_game->y_player][my_game->x_player] = 'P';
	my_game->map[my_game->y_player][my_game->x_player - 1] = '0';
}

void	mv_player_a(t_game *my_game)
{
	mlx_destroy_image(my_game->mlx, my_game->player);
	my_game->player = mlx_xpm_file_to_image(my_game->mlx,
			"imgs/m2.xpm", &my_game->img_w, &my_game->img_h);
	my_game->map[my_game->y_player][my_game->x_player] = 'P';
	my_game->map[my_game->y_player][my_game->x_player + 1] = '0';
}

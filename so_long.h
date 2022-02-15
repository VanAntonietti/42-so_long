/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:52:08 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/15 21:16:25 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include "minilibx/mlx.h"
#include "libft/libft.h"

typedef struct s_map
{
	char	**map;
	int		fd;
	int		width;
	int		height;
	int		col;
	int		row;
}				t_map;

typedef struct s_objects
{
	int	p;
	int	c;
	int	e;
}				t_objects;

typedef struct s_sprites
{
	void	*wall;
	void	*ground;
	void	*collect;
	void	*exit;
	void	**enemies;
	void	**player;
	int		img_width;
	int		img_height;
}				t_sprite;

typedef struct s_vars
{
	void	*mlk;
	void	*win;
}				t_vars;

typedef struct s_player
{
	int	player_x;
	int	player_y;
	int	player_eye;
	int	player_step;
}				t_player;


typedef struct s_module
{
	t_vars		*vars;
	t_map		*map;
	t_player	*player;
	t_coin		*coin;
	t_sprite 	*sprite;
	t_bool		end_game;
}				t_module;

#endif
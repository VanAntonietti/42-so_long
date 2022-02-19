/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:26:32 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/19 15:26:34 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int argc, char **argv)
{
	t_module	*module;

	if (argc == 2)
	{
		module = malloc(1 * sizeof(t_module));
		if (module == NULL)
			exit(error(14, "Memory error allocation in module.map!"));
		if (verify_map(argv[1], module) == 0)
		{
			start_game(module);
			hook(module);
			mlx_loop(module->vars->mlx);
		}
		else
		{
			clear_map(module->map);
			free_ptr((void **)&module);
			exit(-1);
		}
	}
	else
		exit (error(22, "Please run with a map path in the terminal!"));
}

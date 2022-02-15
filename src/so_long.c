/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:52:53 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/15 21:52:28 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)

t_module	*module;

if(argc == 2)
{
	module = malloc(1 * sizeof(t_module));
	if(module == NULL)
		exit(error(14, "Memory error allocation in module.map!"));
	if(verify_map(argv[1], module) == 0)
	{
		start_game(module);
		hook(module);
		mlx_loop(module->vars->mlk);
	}	
}


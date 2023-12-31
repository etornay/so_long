/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicializar_estructura.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:42:58 by etornay-          #+#    #+#             */
/*   Updated: 2023/11/06 13:55:23 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_struct(t_game *game)
{
	game->map = NULL;
	game->map_copy = NULL;
	game->y = 0;
	game->x = 0;
	game->i = 0;
	game->z = -1;
	game->j = 0;
	game->c_player = 0;
	game->c_exit = 0;
	game->c_collect = 0;
	game->c_collect_copy = 0;
	game->c_exit_copy = 0;
	game->moves = 0;
}

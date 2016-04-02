/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_x_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 13:32:47 by rabougue          #+#    #+#             */
/*   Updated: 2016/04/02 12:46:57 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	count_x_2(int *fd, t_coord *coord)
{
	char	*line;
	char	**ret;
	int		var;
	int		x_temp = 0;
	int		**tab;
	int		j = 0;
	int 	i = 0;

	coord->y_point = 1;
	coord->x_point = 1;
	while ((var = get_next_line(*fd, &line)) > 0)
	{
		ret = ft_strsplit(line, ' ');
		while (ret[coord->x_point])
		{
			/*tab[j][i] = ft_atoi(ret[coord->x_point]);*/
			printf("(ret) ret[%d] = %s\n", coord->x_point, ret[coord->x_point]);
			/*printf("(tab) tab[j][%d] = %d\n", coord->x_point, tab[j][i]);*/
			coord->x_point++;
		}
		coord->y_point++;
		if (coord->x_point > x_temp)
			x_temp = coord->x_point;
		coord->x_point = 0;
	}
		RC;
		printf("le fichier contient %d ligne(s)\n", coord->y_point);
		printf("la ligne la plus grande contient %d int\n", x_temp);
}

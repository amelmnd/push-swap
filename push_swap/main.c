/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:17:34 by amennad           #+#    #+#             */
/*   Updated: 2023/08/24 10:22:43 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	*argv_split;
	int	has_space;
	int	nb;

	// int		i;
	// int		j;
	if (argc < 2)
		ft_exit(1);
	else if (argc == 2)
	{
		printf("ouin\n");
		if (!argv[1][0])
			ft_exit(0);
		has_space = has_valid_arg(argv[1]);
		printf("ouin\n");
		if (!has_space)
		{
			nb = ft_atoi_ps(argv[1]);
			printf("nb = %d\n", nb);
		}
		else
		{
			argv_split = ft_split_atoi(argv[1], ' ');
			has_duplicate(argv_split);
			printf("NO DUPLICATE\n");
		}
	}
	system("leaks push_swap");
	return (0);
}

/**
else if (argc == 2)
	{
		argv_split = ft_split(argv[1], ' ');
		printf("argc == 2\n");
		printf("ft_split(argv[1], ' ') = %s\n", argv_split[1]);

		// if (argv_split == NULL)
		// {
		// 	//TODO : CHECK IF ARGV[1] IS A NUMBER SI NO FREE ARGV_SPLIT ET EXIT
		// 	ft_exit(1);
		// }
	}
	else if (argc > 2)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			printf("argv[%d] = %s\n", i, argv[i]);
			if (ft_isdigit(argv[i][j]))
			{
				printf("value ok\n");
				printf("argv[%d][%d] = %c\n", i, j, argv[i][j]);
			}
			else
			{
				printf("value not ok\n");
				if (argv[i][j] == '-' || argv[i][j] == ' ')
				{
					printf("value not ok BUT\n");
					printf("argv[%d] = %s\n", i, argv[i]);
					printf("argv[%d][%d] = %c\n", i, j, argv[i][j]);
				}
				ft_exit(-1);
			}
			i++;
		}
	}
 */
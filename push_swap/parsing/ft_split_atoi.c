/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:13:29 by amennad           #+#    #+#             */
/*   Updated: 2023/08/31 17:59:58 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	nb_str(char *str, char c)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			nb_word++;
		}
		i++;
	}
	return (nb_word);
}

int	ft_atoi_p(char *str)
{
	int			i;
	int			neg;
	long long	res;

	i = 0;
	neg = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res + (str[i] - 48);
		i++;
		if (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
			res = res * 10;
		if ((res > 2147483648 && neg == 1) || (res > 2147483647 && neg == 0))
			ft_exit(-1);
	}
	if (neg == 1)
		return (res * -1);
	return (res);
}

void	create_int(int *tab, char *str, int startword, int len_world)
{
	char	*tmp;

	tmp = ft_substr(str, startword, len_world);
	if (!tmp)
		exit(-1);
	*tab = ft_atoi_p(tmp);
	free(tmp);
}

void	create_array(char *str, char sep, int tab_size, int *tab)
{
	int	i;
	int	startword;
	int	len_world;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len_world = 0;
		if (str[i] == sep)
			i++;
		startword = i;
		if (str[i] != sep)
		{
			while (str[i] != sep && str[i] != '\0')
			{
				len_world++;
				if ((str[i + 1] == sep || str[i + 1] == '\0') && j < tab_size)
					create_int(&tab[j++], str, startword, len_world);
				i++;
			}
		}
	}
}

t_node	*ft_split_atoi(char *s, char sep, t_node *pile)
{
	int		tab_size;
	char	*str;
	int		*tab;

	str = (char *)s;
	if (!str)
		exit(-1);
	tab_size = nb_str(str, sep);
	if (tab_size == 0)
		exit(-1);
	tab = (int *)malloc(sizeof(int) * tab_size + 1);
	if (!tab)
		return (NULL);
	create_array(str, sep, tab_size, tab);
	while (tab_size--)
	{
		pile = ft_push(pile, tab[tab_size]);
	}
	free(tab);
	return (pile);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:13:29 by amennad           #+#    #+#             */
/*   Updated: 2023/08/23 16:37:44 by amennad          ###   ########.fr       */
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

int	ft_atoi_ps(char *str)
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
					tab[j++] = ft_atoi_ps(ft_substr(str, startword, len_world));
				i++;
			}
		}
	}
	tab[j] = 0;
}

int	*ft_split_atoi(char const *s, char sep)
{
	int		tab_size;
	char	*str;
	int		*tab;
	int		*error;

	str = (char *)s;
	if (!str)
	{
		error = (int *)ft_calloc(1, sizeof(int));
		return (error);
	}
	tab_size = nb_str(str, sep);
	if (tab_size == 0)
	{
		error = (int *)ft_calloc(1, sizeof(int));
		return (error);
	}
	tab = (int *)ft_calloc(tab_size + 1, sizeof(int));
	if (!tab)
		return (NULL);
	create_array(str, sep, tab_size, tab);
	return (tab);
}
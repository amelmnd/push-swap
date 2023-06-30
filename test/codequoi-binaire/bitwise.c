/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitwise.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:17:23 by amennad           #+#    #+#             */
/*   Updated: 2023/06/28 11:17:23 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_unsigned_itoa_base(unsigned n, unsigned base);

int	main(void)
{
	unsigned int	nb;
	unsigned int	nb_mod;
	char			*nb_mod_str;
	char			*nb1_str;
	char			*nb2_str;
	int	nb1 = 1;
	int	nb2 = 2;


	/*----Decalage << ----*/
	// nb1_str = ft_unsigned_itoa_base(nb1, 2);
	// nb_mod = nb1 << nb2;
	// nb_mod_str = ft_unsigned_itoa_base(nb_mod, 2);
	// printf("nb1:\t%s \n(Decimal: %u)\n", nb1_str, nb1);
	// printf("nb2:\t%s \n(Decimal: %u)\n", nb_mod_str, nb_mod);
	// //printf("nb_mod:\t%s \n(Decimal: %u)\n", nb_str, nb_mod);

	/*----Decalage >> ----*/
	nb1 = -7856;
	nb1_str = ft_unsigned_itoa_base(nb1, 2);
	nb_mod = ~nb1;
	nb_mod_str = ft_unsigned_itoa_base(nb_mod, 2);
	printf("nb1:\t%s \n(Decimal: %u)\n", nb1_str, nb1);
	printf("nb_mod_str:\t%s \n(Decimal: %u)\n", nb_mod_str, nb_mod);
	free(nb_mod_str);

	// nb = 242;
	// nb_str = ft_unsigned_itoa_base(nb, 2);
	// printf("Binary number:\t\t%s \n(Decimal: %010u)\n", nb_str, nb);
	// free(nb_str);


	// nb_mod = nb >> 1;
	// nb_str = ft_unsigned_itoa_base(nb_mod, 2);
	// printf("Bitshift 1 right:\t%s \n(Decimal: %010u)\n", nb_str, nb_mod);
	// free(nb_str);

	// nb_mod = nb << 10;
	// nb_str = ft_unsigned_itoa_base(nb_mod, 2);
	// printf("Bitshift 10 left:\t%s \n(Decimal: %010u)\n", nb_str, nb_mod);
	// free(nb_str);
	return (0);
}

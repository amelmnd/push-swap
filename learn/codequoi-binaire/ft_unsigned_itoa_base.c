#include <stdlib.h>

/* ft_itoa_len:
*	Mesure la taille de la chaîne de caractères d'un entier non-signé.
*/
static unsigned ft_itoa_len(unsigned n, unsigned base)
{
	unsigned len;

	len = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		len++;
		n /= base;
	}
	return (len);
}

/* ft_num_to_str:
*	Traduit un entier non-signé en une chaîne de caractères selon
*	la base fournie.
*/
static char *ft_num_to_str(unsigned n, char *str, unsigned len, unsigned base)
{
	if (base > 16)
		return (NULL);
	str = malloc(sizeof *str * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len)
	{
		str[len] = "0123456789ABCDEF"[n % base];
		n /= base;
		len--;
	}
	str[len] = "0123456789ABCDEF"[n % base];
	return (str);
}

/* ft_pad_zeros:
*	Ajoute des zéros au début de la chaîne de caractères d'un nombre
*	binaire si besoin.
*/
static char *ft_pad_zeros(char *str, int len)
{
	char *padded;
	int i;
	int j;

	padded = malloc(sizeof *padded * 33);
	if (!padded)
		return (NULL);
	i = 32;
	padded[i] = '\0';
	i--;
	while (--len >= 0)
	{
		padded[i] = str[len];
		i--;
	}
	while (i >= 0)
	{
		padded[i] = '0';
		i--;
	}
	free(str);
	return (padded);
}

/* ft_add_spaces:
*	Ajoute des espaces à la chaîne de caractères d'un nombre binaire.
*/
static char *ft_add_spaces(char *str)
{
	int i;
	int j;
	char *spaced;

	spaced = malloc(sizeof *spaced * 41);
	if (!spaced)
		return (0);
	spaced[41] = '\0';
	i = 0;
	j = 0;
	while (str[i])
	{
		if (j % 5 == 0)
			spaced[j] = ' ';
		else
		{
			spaced[j] = str[i];
			i++;
		}
		j++;
	}
	free(str);
	return (spaced);
}

/* ft_unsigned_itoa_base:
 *	Prend en paramètres un entier non signé et une base (2 = binaire,
 *	10 = décimal, 16 = hexadécimal).
 *	Retourne une chaîne de caractères correspondant au nombre fourni.
 *	Si la base est binaire, la chaîne renvoyée représentera les 32 bits
 *	d'un entier séparé d'espaces pour la lisibilité.
 */
char *ft_unsigned_itoa_base(unsigned int n, unsigned int base)
{
	unsigned int len;
	char *str;

	len = ft_itoa_len(n, base);
	str = ft_num_to_str(n, str, len, base);
	if (base == 2)
	{
		if (len < 32)
			str = ft_pad_zeros(str, len);
		str = ft_add_spaces(str);
	}
	if (!str)
		return (NULL);
	return (str);
}

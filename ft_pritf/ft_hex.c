/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:30:06 by amsryan           #+#    #+#             */
/*   Updated: 2022/04/12 15:49:49 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_hex(unsigned int n)
{
	int	l;

	l = 0;
	while (n != 0)
	{
		n /= 16;
		l++;
	}
	return (l);
}

char	*myywhile(unsigned int j, char *hex, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while (n != 0)
	{
		j = n % 16;
		if (j <= 9)
		{
			j = j + '0';
			hex[k] = j;
			k++;
		}
		else if (j > 9 && j < 17)
		{
			j = j - 10 + 'a';
			hex[k] = j;
			k++;
		}
		n = n / 16;
	}
	return (hex);
}

int	ft_hex(unsigned int n, int l)
{
	unsigned int	j;
	int				h;
	char			*hex;

	l = len_hex(n);
	h = l;
	j = 0;
	if (n == 0)
		return (l + write (1, "0", 1));
	hex = malloc(sizeof (char) * l);
	if (!hex)
    {
        write(1, "Memory allocation error!\n", 26);
		return (0);
    }
    hex = myywhile(j, hex, n);
	while (h--)
		write(1, &hex[h], 1);
	free(hex);
	return (l);
}

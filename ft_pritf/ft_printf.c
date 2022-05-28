/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:14:20 by amsryan           #+#    #+#             */
/*   Updated: 2022/04/12 17:24:26 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_putchr(char c)
{
	write (1, &c, 1);
	return (1);
}

int	norm(char form, va_list list, int len)
{
	if (form == 'c')
		len += ft_putchr(va_arg(list, int));
	if (form == 'd' || form == 'i')
		len += lennbr(va_arg(list, int));
	if (form == 's')
		len = ft_putstr(va_arg(list, char *), len);
	if (form == 'u')
		len += ft_unbr(va_arg(list, unsigned int));
	if (form == '%')
		len += ft_putchr(form);
	if (form == 'x')
		len += ft_hex(va_arg(list, unsigned int), len);
	if (form == 'X')
		len += ft_uphex(va_arg(list, unsigned int), len);
	if (form == 'p')
		len += ft_point(va_arg(list, unsigned long long), len);
	return (len);
}

int	ft_printf(const char *form, ...)
{
	int		index;
	int		len;
	va_list	list;

	index = 0;
	len = 0;
	va_start(list, form);
	while (form[index] != '\0')
	{
		if (form[index] == '%')
		{
			len = norm(form[index + 1], list, len);
			index += 2;
		}
		if (form[index] != '%' && form[index] != '\0')
		{
			ft_putchr(form[index]);
			len++;
			index++;
		}
	}
	va_end(list);
	return (len);
}

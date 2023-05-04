/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:06:36 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/04 17:48:32 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static int	format_eval(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += printf_char(va_arg(args, unsigned int));
	else if (format == 'u')
		len += printf_pt_unint (va_arg(args, unsigned int));
	else if (format == 'X' || format == 'x')
		len += printf_pthex(va_arg(args, unsigned int), format);
}

int	ft_printf(const char *format, ...)
{
}

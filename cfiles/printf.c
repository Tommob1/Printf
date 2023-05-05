/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:06:36 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/05 15:01:38 by btomlins         ###   ########.fr       */
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
	else if (format == 'p')
		len += printf_ptr(va_arg(args, unsigned long long));
	else if (format == 's')
		len += printf_ptstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += printf_ptint(va_arg(args, int));
	else if (format == '%')
		len += printf_pt_pcent();
	return (len);
}

int	ft_printf(const char *format, ...)
{

}

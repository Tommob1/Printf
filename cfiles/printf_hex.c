/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:48:05 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/05 16:19:04 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_hexlen(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

static void	ft_pthex(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_pthex(nb / 16, format);
		ft_pthex(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			printf_char(nb + 48);
		else
		{
			if (format == 'x')
				printf_char(nb - 10 + 'a');
			if (format == 'X')
				printf_char(nb - 10 + 'A');
		}
	}
}

int	printf_pthex(unsigned int nb, const char format)
{
	if (nb == 0)
		return (write(1, "0", 1));
	else
		ft_pthex(nb, format);
	return (ft_hexlen(nb));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ptraddress.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:50:11 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/05 16:26:33 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_ptrlen(uintptr_t nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}

static void	ft_ptptr(uintptr_t nb)
{
	if (nb >= 16)
	{
		ft_ptptr(nb / 16);
		ft_ptptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			printf_char(nb + 48);
		else
			printf_char(nb - 10 + 97);
	}
}

int	printf_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	print_len += write(1, "0x", 2);
	if (ptr == 0)
		print_len += write(1, "0", 1);
	else
	{
		ft_ptptr(ptr);
		print_len += ft_ptrlen(ptr);
	}
	return (print_len);
}

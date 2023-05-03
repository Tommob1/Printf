/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_un_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:34:41 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/03 14:08:42 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	ft_un_int_len(unsigned int nb)
{
	size_t	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

static char	*ft_unitoa(unsigned int n)
{
	char	*nb;
	size_t	len;

	len = ft_un_int_len(n);
	nb = (char *)malloc(sizeof(char) * (len + 1));
	if (!nb)
		return (NULL);
	nb[len] = '\0';
	while (n != 0)
	{
		nb[len - 1] = n % 10 + 48;
		n /= 10;
		len--;
	}
	return (nb);
}

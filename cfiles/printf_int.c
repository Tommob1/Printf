/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:01:51 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/01 14:04:11 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printf_int(int nb)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(nb);
	len = printf_ptstr(num);
	free(num);
	return (len);
}

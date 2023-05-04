/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:56:25 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/04 12:44:19 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	printf_ptstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_ptstr("(null)");
		return (6);
	}
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:38:11 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 08:20:16 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	nbr;
	int				sign;

	nbr = INT_INIT;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == ASCII_MINUS || *str == ASCII_PLUS)
		if (*str++ == ASCII_MINUS)
			sign = -1;
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str++ - ASCII_ZERO);
		if (sign < 0 && nbr > LIMIT_LLONG_MAX)
			return (0);
		if (sign > 0 && nbr > LIMIT_LLONG_MAX)
			return (-1);
	}
	return ((int)(nbr * sign));
}

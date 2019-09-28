/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:38:26 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 09:44:08 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	size_t	size;
	t_bool	minus;
	char	*str;

	if (nbr < 0)
		minus = true_t;
	else
		minus = false_t;
	size = ft_nbrlen(nbr);
	if (!(str = ft_strnew(size)))
		return (NULL);
	while (size - minus)
	{
		*(str + --size) = (char)(ft_abs(nbr % 10) + ASCII_ZERO);
		nbr = (nbr - (nbr % 10)) / 10;
	}
	if (minus)
		*str = ASCII_MINUS;
	return (str);
}

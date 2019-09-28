/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:38:19 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:04 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int chr)
{
	return ((chr >= ASCII_UPPERCASE_A && chr <= ASCII_UPPERCASE_Z) ||
			(chr >= ASCII_LOWERCASE_A && chr <= ASCII_LOWERCASE_Z));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:26:27 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:03 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char chr)
{
	return ((chr >= ASCII_HORIZONTAL_TAB && chr <= ASCII_CARRIAGE_RETURN) ||
			chr == ASCII_SPACE);
}

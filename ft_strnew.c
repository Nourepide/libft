/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:39:54 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:31:50 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size + 1 == INT_INIT)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (size + 1))))
		ft_bzero(str, size + 1);
	return (str);
}

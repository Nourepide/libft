/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:39:56 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:04 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str1, const char *str2, size_t size)
{
	size_t	size_l;

	if (!(size_l = ft_strlen(str2)))
		return ((char *)str1);
	while (*str1 && size >= size_l)
		if ((ft_strnequ(str1, str2, size_l)))
			return ((char *)str1);
		else
			str1++ && size--;
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:38:48 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:04 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	while (size--)
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
			(str1++ && str2++);
	return (0);
}

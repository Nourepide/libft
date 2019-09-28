/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:15:27 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:04 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t size)
{
	unsigned char	*dst_;
	unsigned char	*src_;

	dst_ = (unsigned char *)dst;
	src_ = (unsigned char *)src;
	if (dst || src)
		while (size--)
			*(dst_ + size) = *(src_ + size);
	return (dst);
}

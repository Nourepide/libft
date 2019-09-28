/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:38:44 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:04 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int chr, size_t size)
{
	unsigned char	*dst_;
	unsigned char	*src_;

	dst_ = (unsigned char *)dst;
	src_ = (unsigned char *)src;
	while (size--)
	{
		*dst_++ = *src_++;
		if (*(dst_ - 1) == (unsigned char)chr)
			return (dst_);
	}
	return (NULL);
}

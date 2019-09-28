/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:39:44 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:04 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	index;
	size_t	size;

	if (!str)
		return (NULL);
	if (!(result = ft_strnew(ft_strlen(str))))
		return (NULL);
	else
	{
		index = INT_INIT;
		size = INT_INIT;
	}
	while (*str)
		ft_memset(result + size++, f(index++, *str++), sizeof(char));
	return (result);
}

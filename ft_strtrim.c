/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:40:07 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 07:17:04 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	char const	*str_;

	if (str == NULL)
		return (NULL);
	while (ft_isspace(*str))
		str++;
	if (!*str)
		return (ft_strnew(0));
	str_ = str + ft_strlen(str) - 1;
	while (ft_isspace(*str_))
		str_--;
	return (ft_strsub(str, 0, str_ - str + 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:40:01 by sjanie            #+#    #+#             */
/*   Updated: 2019/09/26 09:44:15 by sjanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcwsplit(char const *str, char chr)
{
	t_bool		flag;
	size_t		index;

	flag = false_t;
	index = INT_INIT;
	while (*str)
		if ((*str == chr && !flag) || (*str != chr && flag))
			str++;
		else if (*str != chr && !flag)
			(flag = true_t) && index++ && str++;
		else if (*str == chr && flag)
			!(flag = false_t) && str++;
	return (index);
}

static size_t	ft_strswsplit(char const *str, char chr)
{
	size_t		size;

	size = INT_INIT;
	while (*str != chr)
		(size++ && str++);
	return (--size);
}

static t_bool	ft_strcasplit(char **str_arr, char *str, char chr, size_t size)
{
	if ((str_arr[size] = ft_strndup(str, ft_strswsplit(str, chr))))
		return (true_t);
	ft_strarrdel(str_arr, size);
	return (false_t);
}

char			**ft_strsplit(char const *str, char chr)
{
	t_bool		flag;
	size_t		size;
	size_t		count;
	char		**str_arr;

	if (!(str && chr))
		return (NULL);
	flag = false_t;
	size = ft_strcwsplit(str, chr);
	count = INT_INIT;
	if (!(str_arr = ft_strarrnew(size)))
		return (NULL);
	while (count < size && *str)
		if ((*str == chr && !flag) || (*str != chr && flag))
			str++;
		else if (*str != chr && !flag)
			if (!(ft_strcasplit(str_arr, (char *)str, chr, count)))
				return (NULL);
			else
				flag = true_t;
		else if (*str == chr && flag)
			!(flag = false_t) && count++ && str++;
	return (str_arr);
}

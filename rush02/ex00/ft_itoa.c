/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:13:39 by mbartos           #+#    #+#             */
/*   Updated: 2023/09/24 23:27:30 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_func.h"

char	*switch_string(char *str)
{
	char	*str_new;
	int		length;
	int		i;

	length = ft_strlen(str);
	str_new = (char *)malloc(sizeof(char) * (length + 1));
	i = 0;
	while (length > 0)
	{
		str_new[i++] = str[length-- - 1];
	}
	str_new[i] = 0;
	return (str_new);
}

char	*ft_itoa(t_int64 number)
{
	int		length;
	t_int64	result;
	int		i;
	char	*str;
	char	*str_new;

	length = 0;
	result = number;
	while (result != 0)
	{
		length++;
		result = result / 10;
	}
	str = (char *)malloc(sizeof(char) * (length + 1));
	i = 0;
	while (i < length)
	{
		str[i++] = number % 10 + '0';
		number = number / 10;
	}
	str[i] = 0;
	str_new = switch_string(str);
	free(str);
	return (str_new);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

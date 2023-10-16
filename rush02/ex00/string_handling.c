/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:34:39 by mbartos           #+#    #+#             */
/*   Updated: 2023/09/24 23:19:57 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_func.h"

int	ft_is_str_inside_str(char *str, char *to_find, int *position)
{
	int	i;

	i = 0;
	while (to_find[i] != 0 || (str[i] != ' ' && str[i] != ':'))
	{
		if (str[i] == to_find [i])
			i++;
		else
			return (0);
	}
	*position = i;
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	is_inside;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			is_inside = ft_is_str_inside_str(&str[i], to_find, &j);
			if (is_inside == 1)
				return (&str[i + j]);
		}
		i++;
	}
	return (NULL);
}

char	*rmv_spcs_ddot_spcs(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == ':')
		i++;
	else
		return (NULL);
	while (str[i] == ' ')
		i++;
	return (&str[i]);
}

char	*rmv_spcs_inside_of_str(char *str)
{
	int		i;
	int		j;
	int		strlen;
	char	*edited_word;

	i = 0;
	strlen = 0;
	while (str[i++] != 0)
	{
		if ((str [i] >= 32 && str [i] <= 127 && str[i] != ' ')
			|| (str[i] == ' ' && (str[i + 1] != ' ' && str[i + 1] != 0)))
			strlen++;
	}
	edited_word = (char *)malloc(sizeof(char) * (strlen + 1));
	i = 0;
	j = 0;
	while (j <= strlen)
	{
		if ((str [i] >= 32 && str [i] <= 127 && str[i] != ' ')
			|| (str[i] == ' ' && (str[i + 1] != ' ' && str[i + 1] != 0)))
			edited_word[j++] = str[i];
		i++;
	}
	edited_word[j] = 0;
	return (edited_word);
}

char	*get_word(char *str)
{
	int		strlen;
	int		i;
	char	*word;

	strlen = 0;
	while (str[strlen] != '\n' && str[strlen] != 0)
	{
		strlen++;
	}
	word = (char *)malloc(sizeof(char) * (strlen + 1));
	i = 0;
	while (i < strlen)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

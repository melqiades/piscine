/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:31:16 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/24 23:38:17 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_func.h"

int	error_messages(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ',' || str[i] == '.' || str[i] == '-')
		{
			ft_putstr("Error");
			return (0);
		}
		i++;
	}
	if (str[0] == '0')
		ft_putstr("zero");
	return (1);
}

void	input_number(char **argv)
{
	int		i;
	char	*word;
	t_int64	*num_list;

	if (error_messages(argv[1]))
	{
		i = 0;
		num_list = convert(argv[1]);
		while (num_list[i] != 0)
		{
			word = find_word_by_key(NULL, ft_itoa(num_list[i]));
			if (word)
				ft_putstr(word);
			else
				ft_putstr("Dict Error");
			if (num_list[i + 1] != 0)
				ft_putstr(" ");
			i++;
			free(word);
		}
	}
}

void	input_dictionary_number(char **argv)
{
	int		i;
	char	*word;
	t_int64	*num_list;

	if (error_messages(argv[2]))
	{
		i = 0;
		num_list = convert(argv[2]);
		while (num_list[i] != 0)
		{
			word = find_word_by_key(argv[1], ft_itoa(num_list[i]));
			if (word != NULL)
				ft_putstr(word);
			else
				ft_putstr("Dict Error");
			if (num_list[i + 1] != 0)
				ft_putstr(" ");
			i++;
			free(word);
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		input_number(argv);
	}
	else if (argc == 3)
	{
		input_dictionary_number(argv);
	}
	else
	{
		ft_putstr("Error");
	}
	ft_putstr("\n");
}

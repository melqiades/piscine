/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:35:16 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/17 18:35:19 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;
	int	j;

	i = 0;
	res = 0;
	j = 1;
	while (s1[i] || s2[i])
	{
		res = (s1[i] - s2[i]);
		if (res == 0)
		{
			i++;
			j++;
		}
		else
		{
			return (res);
		}
	}
	return (0);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
		i = 0;
	}
}

void	swap1(char **str1_ptr, char **str2_ptr)
{
	char	*temp;

	temp = *str1_ptr;
	*str1_ptr = *str2_ptr;
	*str2_ptr = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc && j > 0)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				swap1(&argv[j], &argv[j - 1]);
			}
			j--;
		}
		i++;
	}
	ft_print_params(argc, argv);
}

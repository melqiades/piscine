/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_dict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:33:31 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/24 23:08:22 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_func.h"

t_int64	check_hundred(t_int64 num)
{
	if (num >= 90)
		return (90);
	else if (num >= 80)
		return (80);
	else if (num >= 70)
		return (70);
	else if (num >= 60)
		return (60);
	else if (num >= 50)
		return (50);
	else if (num >= 40)
		return (40);
	else if (num >= 30)
		return (30);
	else if (num >= 20)
		return (20);
	else if (num >= 10)
		return (10);
	else
		return (num);
}

t_int64	check_million(t_int64 num)
{
	if (num >= 1000000000000000000)
		return (1000000000000000000);
	else if (num >= 1000000000000000)
		return (1000000000000000);
	else if (num >= 1000000000000)
		return (1000000000000);
	else if (num >= 1000000000)
		return (1000000000);
	else if (num >= 1000000)
		return (1000000);
	else if (num >= 1000)
		return (1000);
	else if (num >= 100)
		return (100);
	else
		return (check_hundred(num));
}

int	add_to_dict(t_int64 num, t_int64 *num_list, int index)
{
	t_int64	dict_num;

	dict_num = check_million(num);
	if (num >= 100)
	{
		index = add_to_dict(num / dict_num, num_list, index);
		num_list[index] = dict_num;
		index++;
		index = add_to_dict(num % dict_num, num_list, index);
	}
	else if (num >= 20)
	{
		num_list[index] = dict_num;
		index++;
		num -= dict_num;
	}
	if (num < 20 && num != 0)
	{
		num_list[index] = num;
		index++;
	}
	return (index);
}

int	arr_len(t_int64 num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i += 2;
		num /= 10;
	}
	return (i);
}

t_int64	*convert(char *str)
{
	t_int64	num;
	t_int64	*num_list;

	num = ft_real_atoi(str);
	num_list = malloc(sizeof(t_int64) * arr_len(num));
	add_to_dict(num, num_list, 0);
	return (num_list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:38:37 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/16 18:12:05 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 48 && str[i] <= 57)
	{
		i++;
	}
	else
	{
		return (0);
	}
	return (1);
}

int	ft_sign(int i, char *str)
{
	int	odd;

	odd = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			odd++;
		}
		i++;
	}
	if (odd % 2 == 1)
		return (-1);
	else
		return (1);
}

int	sign_pos(int i, char *str)
{
	while (str[i] == 43 || str[i] == 45)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;

	sign = 1;
	i = 0;
	num = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		sign = ft_sign(i, str);
		i = sign_pos(i, str);
	}
	if (ft_str_is_numeric(&str[i]))
	{
		while ((ft_str_is_numeric(&str[i]) && str[i]))
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
	}
	return (num * sign);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("   	-+-+-+-+---54jhg6fef"));
}*/

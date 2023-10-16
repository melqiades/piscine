/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:27:08 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/13 22:00:05 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str >= 32 && *str <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	*dec2hex(int q)
{
	int	hex[100];
	int	j;
	int	r;
	int	i;

	j = 0;
	r = 0;
	i = 0;
	hex[1] = 48;
	hex[2] = 48;
	while (q != 0)
	{
		r = q % 16;
		if (r < 10)
			hex[j++] = 48 + r;
		else
			hex[j++] = 87 + r;
		q = q / 16;
	}
	j = 1;
	while (j >= 0)
	{
		write(1, &hex[j--], 1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(&str[i]) == 1)
		{
			write(1, &str[i], 1);
			i++;
		}
		else
		{
			write(1, "\\", 1);
			dec2hex(str[i]);
			i++;
		}
	}
}
/*
int	main(void)
{
	char	*word;

	word = "\x1F";
	ft_putstr_non_printable(word);
	return (0);
}*/

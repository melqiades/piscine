/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:56:14 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/16 18:56:17 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	is_negative(long nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	return (nbr);
}

int	ft_error_check(char *base)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (base[++i])
	{
		j = i;
		while (base[j++])
		{
			if (base[i] == base[j])
				return (1);
			if (!(base[i] >= '0' && base[i] <= '9'))
			{
				if (!(base[i] >= 'a' && base[i] <= 'z'))
				{
					if (!(base[i] >= 'A' && base[i] <= 'Z'))
						return (1);
				}
			}
		}
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_putstr(char *str, int i)
{
	while (i > -1)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		count;
	long	q;
	int		i;
	char	out[100];

	count = 0;
	q = 1;
	i = 0;
	while (base[count])
		count++;
	if (ft_error_check(base))
		return ;
	q = is_negative(nbr);
	if (q == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (q != 0)
	{
		out[i] = base[q % count];
		q = q / count;
		i++;
	}
	ft_putstr(out, (i - 1));
}
/*
int main(void)
{
	char	*base;

	base = "01";
	ft_putnbr_base(-2147483648, base);
}*/

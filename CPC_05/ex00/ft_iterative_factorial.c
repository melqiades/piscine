/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:52:58 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/18 20:53:00 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
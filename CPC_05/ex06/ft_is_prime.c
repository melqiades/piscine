/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:59:07 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/20 13:59:08 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i < nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main (void)
{	
	int i;

	// ft_is_prime(6);
	for(i = -10; i < 1000; i++)
	{
		if (ft_is_prime(i))
			printf("%d,", i);
		//else
			//printf("odmocnina z %d je %d \n", i,ft_sqrt(i));
	}
}*/

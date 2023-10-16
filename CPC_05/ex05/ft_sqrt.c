/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:27:12 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/20 17:26:31 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i != nb && i * i <= nb && i <= 46340)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}
/*
int	main (void)
{	
	int i;

	i = 2147483647;
	printf("odmocnina z %d je %d \n", i,ft_sqrt(i));
	for(i = -200; i < 500; i++)
	{
		if (ft_sqrt(i))
			printf("odmocnina z %d je %d \n", i,ft_sqrt(i));
		else
			printf("odmocnina z %d je %d \n", i,ft_sqrt(i));
	}
}*/

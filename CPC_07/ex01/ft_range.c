/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:38:08 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/21 15:38:13 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_int;
	int	i;
	int	size_of_array;

	i = 0;
	size_of_array = max - min;
	array_int = malloc(size_of_array * sizeof(min));
	if (array_int == NULL || size_of_array <= 0)
		return (NULL);
	while (min < max)
	{
		array_int[i] = min++;
		i++;
	}
	return (array_int);
}
/*
int	main(void)
{	
	int	*pointer;
	int	i;

	i = 0;
	pointer = ft_range(20, 29);
	while (i < (10 - 1))
	{
		printf ("%d\n", pointer[i]);
		i++;
	}
	free(pointer);
}*/
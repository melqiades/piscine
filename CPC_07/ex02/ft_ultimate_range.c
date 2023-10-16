/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:04:40 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/21 16:04:42 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*ptr;

	printf("%d",ft_ultimate_range(&ptr, -2147483647, 2147483647));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:30:34 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/11 12:07:04 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	lwst;
	int	store;

	i = 0;
	while (i < size)
	{
		lwst = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				lwst = j;
				store = tab[j];
				tab[j] = tab[i];
				tab[i] = store;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	*tab;
	int	size;
    int i = 0;	
	int a[] = { 0, 23, 14, 12, 9 };
	tab = a;
	size = sizeof(a)/sizeof(a[0]);
    while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
    printf("\n");
    i = 0;
  	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
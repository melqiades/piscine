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
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int     store;

    store = *a;
    *a = *b;
    *b = store;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	lwst;
	int store;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
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
				
				//ft_swap (&tab[i], &tab[lwst]);
			}
		j++;	
		}
	i++;
	}
	i = 0;
	printf("\n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	*tab;
	int	size;	
	int a[] = { 0, 5, 2, 88, 9 };
	tab = a;
	size = sizeof(a)/sizeof(a[0]);
	ft_rev_int_tab(tab, size);
}
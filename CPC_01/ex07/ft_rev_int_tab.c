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
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	while (i < size / 2)
	{
		rev = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = rev;
		i++;
	}
}
/*
int	main(void)
{
	int	*tab;
	int	size;	
	int a[] = {1, 2, 3, 4, 5, 6};
	tab = a;
	size = sizeof(a)/sizeof(a[0]);
	ft_rev_int_tab(tab, size);
}*/

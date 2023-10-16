/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:36:15 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 19:49:13 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	store;

	store = *a;
	*a = *b;
	*b = store;
}
/*
int main()
{
        int a = 10;
        int b = 20;


       // printf("a = %p\n", &a);
       // printf("b = %p\n", &b);

        ft_swap(&a, &b);

       // printf("a_po = %p\n", &a);
       // printf("b_po = %p\n", &b);

        return 0;
}
*/

/*int 	main(void)
{
	int	c;
	int	d;
	int	*pntr_c;
	int	*pntr_d;

	c = 55;
	d = 81;
	pntr_c = &c;
	pntr_d = &d;
	write(1,pntr_c, 1);
	write(1, "\n", 1);
	write(1, pntr_d, 1);
	write(1, "\n", 1);
	ft_swap(pntr_c, pntr_d);
	write(1,pntr_c, 1);
	write(1, "\n", 1);
        write(1, pntr_d, 1);

	return (0);

}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:39:31 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 13:44:38 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	c;
	int*	ptr;
	char	buffer[60];
	
	c = 25;
	sprintf(buffer,"%d", c);
	write (1, buffer, strlen(buffer));
	write(1, "\n", 1);
	ptr = &c;
	ft_ft(ptr);
	sprintf(buffer,"%d", c);
	write(1, buffer, sizeof(buffer));
	return (0);
}*/

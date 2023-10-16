/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:15:17 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/12 19:15:19 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] || s2[i])
	{
		res = s1[i] - s2[i];
		if (res == 0)
		{
			i++;
		}
		else
		{
			return (res);
		}
	}
	return (0);
}

/*
int	main(void)
{
	char *s1 = "banana";
    char *s2 = "bananaa";
	int	k;

	k = ft_strcmp(s1,s2);
	printf("%d",k);
	//write(1,&k,sizeof(k));
}*/

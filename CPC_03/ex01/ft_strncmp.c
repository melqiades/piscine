/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:55:15 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/13 14:55:18 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while ((s1[i] || s2[i]) && i < n)
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
	char *s1 = "bananaeesefelnanas";
    char *s2 = "banana";
	int	k;

	k = ft_strncmp(s1,s2, 5);
	printf("%d",k);
	//write(1,&k,sizeof(k));
}*/

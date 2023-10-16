/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:31:09 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/25 16:31:14 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_dup(char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(src, dest);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strings;
	int			i;
	int			j;

	i = 0;
	j = 0;
	strings = malloc((ac + 1) * sizeof(t_stock_str));
	if (strings == NULL)
		return (NULL);
	while (i < ac)
	{
		strings[i].size = ft_strlen(av[i]);
		strings[i].str = av[i];
		strings[i].copy = ft_dup(av[i]);
		i++;
	}
	strings[i].str = 0;
	return (strings);
}
/*
int	main(void)
{
	char		**av;
	t_stock_str	*r;

	av = malloc(3 * sizeof(char *));
	av[1] = malloc(6 * sizeof(char));
	ft_strcpy("Hello", av[1]);
	av[2] = malloc(6 * sizeof(char));
	ft_strcpy("World", av[2]);
	av[0] = malloc(9 * sizeof(char));
	ft_strcpy("yes,you!", av[0]);
	r = ft_strs_to_tab(3, av);
	ft_show_tab(r);
	free(av[0]);
	free(av[1]);
	free(av[2]);
	free(av);
	free(r[0].copy);
	free(r[1].copy);
	free(r[2].copy);
	free(r);
}*/

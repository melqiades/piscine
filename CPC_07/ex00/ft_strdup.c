/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:50 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/20 18:15:52 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_strcpy(char *src, char *dest)
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

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strcpy(src, dest);
	return (dest);
}
/*
int	main(void)
{
	printf("%s", ft_strdup("Hello World"));
}*/
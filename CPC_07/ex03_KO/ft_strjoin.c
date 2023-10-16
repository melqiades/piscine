/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:04:49 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/21 17:04:51 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (dest);
}

int	ft_complete_size(int size, char **strs, char *sep)
{
	int	i;
	int	complete_size;
	int	j;

	i = 0;
	complete_size = 0;
	j = 0;
	while (i < size)
	{
		complete_size += ft_strlen(strs[i]);
		i++;
	}
	complete_size += size * ft_strlen(sep);
	return (complete_size);
}

char	*check_f(void)
{
	char	*final;

	final = malloc(sizeof(char));
	if (final == NULL)
		return (NULL);
	return (final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		complete_size;
	int		i;

	i = -1;
	if (size == 0)
		return (check_f());
	complete_size = ft_complete_size(size, strs, sep);
	final = (char *)malloc(complete_size * sizeof(char));
	if (final == NULL)
		return (NULL);
	while (++i < size)
		final[i] = 0;
	i = 0;
	while (i < size)
	{
		final = ft_strcat(final, strs[i]);
		if (i != (size - 1))
			final = ft_strcat(final, sep);
		i++;
	}
	return (final);
}

int	main(void)
{
	char **str;
	int	size;
	char	*sep;

	sep = " ";
	// str = malloc(3 * sizeof(char *));
	// str[0] = "Hello";
	// str[1] = "how are you";
	// str[2] = " yos";
	size = 0;
	printf("%s", ft_strjoin(size, str, sep));
}
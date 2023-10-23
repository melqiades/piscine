/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:58:26 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/13 11:49:54 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size != 0)
	{
		while (src[i] != 0 && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (j);
}
/*
int	main(void)
{
	char	*text = "Lgju  csaefaewf awecewac we cw";
	char	new_text[sizeof(text)];

	//ft_strlcpy(new_text, text, 0);
	printf("%s\n", text);
	printf("%s\n", new_text);
   	printf("%d", ft_strlcpy(new_text, text, 5));


}*/

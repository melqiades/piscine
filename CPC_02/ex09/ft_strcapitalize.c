/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:27:21 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/12 16:04:17 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char str)
{
	int	i;

	i = 0;
	if ((str > 64 && str < 91) || (str > 96 && str < 123))
	{
		return (1);
	}
	else if (str > 47 && str < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
	{
		if (ft_str_is_alpha(str[i]) == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
			while (ft_str_is_alpha (str[++i]))
			{
				if (str[i] >= 65 && str[i] <= 90)
				{
					str[i] = str[i] + 32;
				}
			}
		}
	}
	return (str);
}

/*int	main(void)
{
	char	text[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(text));
}*/

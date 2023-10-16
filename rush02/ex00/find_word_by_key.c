/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_word_by_key.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:44:12 by mbartos           #+#    #+#             */
/*   Updated: 2023/09/24 23:21:31 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_func.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_search_by_key(char *dict, char *key_to_find)
{
	char	*after_key;
	char	*word;
	char	*finished_word;

	after_key = ft_strstr(dict, key_to_find);
	if (after_key == NULL)
		return (NULL);
	after_key = rmv_spcs_ddot_spcs(after_key);
	if (after_key == NULL)
		return (NULL);
	word = get_word(after_key);
	finished_word = rmv_spcs_inside_of_str(word);
	free(word);
	return (finished_word);
}

char	*dict_to_str(char *dict_name)
{
	int		fd;
	int		sz;
	char	*dict_str;

	dict_str = (char *)malloc(sizeof(char) * 1000);
	if (dict_name == NULL)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(dict_name, O_RDONLY);
	if (fd < 0)
		return (NULL);
	sz = read(fd, dict_str, 1000);
	dict_str[sz] = 0;
	close(fd);
	return (dict_str);
}

char	*find_word_by_key(char *dict_name, char *key)
{
	char	*dict_str;
	char	*word;

	dict_str = dict_to_str(dict_name);
	if (dict_str == NULL)
		return (dict_str);
	word = ft_search_by_key(dict_str, key);
	free (dict_str);
	return (word);
}

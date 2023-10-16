/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:59:04 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/24 23:28:41 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNC_H
# define FT_FUNC_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef unsigned long long int	t_int64;

char	*find_word_by_key(char *dict, char *key);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_itoa(t_int64 number);
t_int64	*convert(char *str);
t_int64	ft_real_atoi(char *str);
int		ft_is_str_inside_str(char *str, char *to_find, int *position);
char	*ft_strstr(char *str, char *to_find);
char	*rmv_spcs_ddot_spcs(char *str);
char	*rmv_spcs_inside_of_str(char *str);
char	*get_word(char *str);

#endif

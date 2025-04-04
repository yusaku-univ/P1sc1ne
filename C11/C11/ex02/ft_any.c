/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:26:42 by yutakumi          #+#    #+#             */
/*   Updated: 2025/03/27 16:47:15 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	is_nonempty(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char	*tab1[] = {"", "  ", "\t\n", 0};
// 	char	*tab2[] = {"hello", "", " ", 0};

// 	if (ft_any(tab1, &is_nonempty))
// 		printf("tab1: TRUE\n");
// 	else
// 		printf("tab1: FALSE\n");

// 	if (ft_any(tab2, &is_nonempty))
// 		printf("tab2: TRUE\n");
// 	else
// 		printf("tab2: FALSE\n");

// 	return (0);
// }

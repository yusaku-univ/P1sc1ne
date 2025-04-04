/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thirata <thirata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:57:01 by yumiyaha          #+#    #+#             */
/*   Updated: 2025/03/31 19:48:44 by thirata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	setup_dict_num(int argc, char **argv, char **dict_path, char **number)
{
	if (argc == 2)
	{
		*dict_path = "numbers.dict";
		*number = argv[1];
	}
	else if (argc == 3)
	{
		*dict_path = argv[1];
		*number = argv[2];
	}
	else
		return (1);
	return (0);
}

void	error(int par)
{
	if (par == 1)
		ft_putstr("Error\n");
	if (par == 2)
		ft_putstr("Dict Error\n");
}

int	main(int argc, char **argv)
{
	char	*dict_path;
	char	*number;
	t_dict	*dict;
	int		flag;

	if (setup_dict_num(argc, argv, &dict_path, &number))
		return (error(1), 1);
	if (!is_valid_numeric(number))
		return (error(1), 1);
	dict = parse_dict(dict_path);
	if (!dict)
		return (error(2), 1);
	flag = convert_number(number, dict);
	if (flag == 1)
		error(1);
	else if (flag == 2)
		error(2);
	free_dict(dict);
	return (0);
}

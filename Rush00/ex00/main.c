/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:31:48 by shkuroda          #+#    #+#             */
/*   Updated: 2025/03/16 18:19:44 by yutakumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	write(1, "\n\n", 1);
	rush(5, 1);
	write(1, "\n\n", 1);
	rush(1, 1);
	write(1, "\n\n", 1);
	rush(1, 5);
	write(1, "\n\n", 1);
	rush(4, 4);
	return (0);
}

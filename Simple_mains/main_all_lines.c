/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:52:34 by gbricot           #+#    #+#             */
/*   Updated: 2023/03/03 13:13:22 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*res;

	fd = open("text.txt", O_RDONLY);
	res = get_next_line(fd);
	printf("%s", res);
	while (res != NULL)
	{
		free(res);
		res = get_next_line(fd);
		if (res)
			printf("%s", res);
	}
	free(res);
	return (0);
}

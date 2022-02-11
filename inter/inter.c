/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:21:09 by bkeskint          #+#    #+#             */
/*   Updated: 2022/02/11 21:46:29 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int array[255];

	i = 0;
	while (i < 255)
	{
		array[i] = 0;
		i++;
	}
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if(argv[1][i] == argv[2][j] && array[(unsigned char)argv[1][i]] == 0)
				{
					write(1, &argv[1][i], 1);
					array[(unsigned char)argv[1][i]] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

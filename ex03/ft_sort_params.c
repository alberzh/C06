/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:24:24 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/30 17:41:15 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Los argumentos a ordenar son desde argv[1] hasta argv[argc - 1].
// La comparación para ordenar se hace con la función strcmp (o una comparación manual que respete el orden ASCII).

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_mirror.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:27:28 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/31 19:31:03 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_rev_word(char *word)
{
	char	*start;
	char	*end;
	char	temp;

	start = word;	// Pointer to the start of the word
	end = word;	 	// Pointer to the end of the word
	while (*end) 	// Move end pointer to the last character, excluding the null terminator
		end++;
	end--;  	  	// Move back to the last character
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			ft_rev_word(argv[i]);
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			if (i < argc - 1)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 00:48:20 by jfilipa-          #+#    #+#             */
/*   Updated: 2024/08/25 23:22:14 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = duplicate_argv(argv + 1);
	init_stack_a(&a, argv);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_3(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}

void	frees(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

char	**duplicate_argv(char **argv)
{
	char	**duplicate_argv;
	int		i;

	i = 0;
	while (argv[i])
		i++;
	duplicate_argv = ft_calloc(i + 1, sizeof(char *));
	while (--i >= 0)
	{
		duplicate_argv[i] = ft_strdup(argv[i]);
	}
	return (duplicate_argv);
}

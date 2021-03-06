/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:34:49 by cjimenez          #+#    #+#             */
/*   Updated: 2022/04/26 17:47:33 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_stack(t_stack **stack)
{
	t_stack	*ptr;
	t_stack	*tmp;

	ptr = *stack;
	*stack = NULL;
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	return (1);
}

int	is_digit(char *str)
{
	int	i;

	i = -1;
	if (str[i + 1] == '\0')
		return (1);
	if ((str[i + 1] == '-' || str[i + 1] == '+') && ft_strlen(str) == 1)
		return (1);
	if (str[i + 1] == '-' || str[i + 1] == '+')
		i++;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	return (0);
}

int	is_int(char *str)
{
	if (ft_strlen(str) > 11)
		return (1);
	if (str[0] == '-')
	{
		if (ft_atoi(str) > 0)
			return (1);
	}
	else
	{
		if (ft_atoi(str) < 0)
			return (1);
	}
	return (0);
}

int	is_double(int number, t_stack *stack)
{
	while (stack != NULL)
	{
		if (stack->content == number)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	ft_check(int ac, char **av, t_stack **stack)
{
	int		i;
	char	*arg;
	int		content;

	i = 0;
	if (ac > 2)
	{
		while (++i < ac)
		{
			arg = av[i];
			if (is_digit(arg) == 1)
				return (free_stack(stack), ft_printf("Error\n"));
			if (is_int(arg) == 1)
				return (free_stack(stack), ft_printf("Error\n"));
			content = ft_atoi(arg);
			if (is_double(content, *stack) == 1)
				return (free_stack(stack), ft_printf("Error\n"));
			ft_add_last(stack, ft_stack_new(content));
		}
		if (ft_sort_check(*stack) == 0)
			return (free_stack(stack));
	}
	return (0);
}

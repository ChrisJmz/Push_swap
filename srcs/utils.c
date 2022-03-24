/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:11:30 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/24 16:03:35 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_last(t_stack **alst, t_stack *new)
{
	t_stack	*ptr;

	if (*alst == NULL)
		*alst = new;
	else
	{
		ptr = *alst;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new;
	}
}

t_stack	*ft_stack_new(int content)
{
	t_stack	*p;

	p = malloc(sizeof(t_stack));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

int	count_stack(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

int	ft_sort_check(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->next->content < stack->content)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int find_big(t_stack *stack)
{
	int max;
	
	max = stack->content;
	while (stack != NULL)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}

int	find_small(t_stack *stack)
{
	int min;

	min = stack->content;
	while (stack != NULL)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}
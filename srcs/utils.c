/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:11:30 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/25 11:15:05 by cjimenez         ###   ########.fr       */
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

int	ft_lstsize2(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	ft_fill_index(t_stack *stack_a)
{
	int	i;

	i = -1;
	while (stack_a)
	{
		stack_a->index = i;
		stack_a = stack_a->next;
	}
}

void	ft_fill_index_2(t_stack *stack_a, int i)
{
	t_stack	*minimum;
	t_stack	*tmp;

	minimum = stack_a;
	while (minimum->index != -1)
		minimum = minimum->next;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index == -1 && minimum->content > tmp->content)
			minimum = tmp;
		tmp = tmp->next;
	}
	minimum->index = i;
}

void	index_stack(t_stack **stack_a)
{
	t_stack	*temp;
	int		i;
	int		size;

	i = 0;
	temp = *stack_a;
	size = ft_lstsize2(temp);
	while (i < size)
		ft_fill_index_2(temp, i++);
}
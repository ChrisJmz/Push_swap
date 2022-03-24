/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:57:41 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/24 16:41:15 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_2(t_stack **stack_a)
{
    int first;
    int second;

    first = (*stack_a)->content;
    second = (*stack_a)->next->content;

    if (first > second)
        ft_rotate_a(stack_a);
}
void    sort_3(t_stack **stack_a)
{
    int first;
    int second;
    int third;

    first = (*stack_a)->content;
    second = (*stack_a)->next->content;
    third = (*stack_a)->next->next->content;
    if (first < third && second > third)
    {
        ft_rrotate_a(stack_a);
        ft_swap_a(stack_a);
    }
    if (first > second && first < third)
        ft_swap_a(stack_a);
    if (first < second && first > third)
        ft_rrotate_a(stack_a);
    if (first > third && second < third)
        ft_rotate_a(stack_a);
    if (first > second && second > third)
    {
        ft_rotate_a(stack_a);
        ft_swap_a(stack_a);
    }
}

void    sort_4(t_stack **stack_a, t_stack **stack_b)
{
    int smallest;

    smallest = find_small(*stack_a);
    while ((*stack_a)->content > smallest)
    {
        if ((*stack_a)->next->content == smallest)
            ft_rotate_a(stack_a);
        else
            ft_rrotate_a(stack_a);
    }
    ft_push_b(stack_a, stack_b);
    sort_3(stack_a);
    ft_push_a(stack_a, stack_b);
}

void sort_5(t_stack **stack_a, t_stack **stack_b)
{
    int smallest;

    smallest = find_small(*stack_a);
    while ((*stack_a)->content > smallest)
    {
        if ((*stack_a)->next->content == smallest)
            ft_rotate_a(stack_a);
        else
            ft_rrotate_a(stack_a);
    }
    ft_push_b(stack_a, stack_b);
    sort_4(stack_a, stack_b);
    ft_push_a(stack_a, stack_b);
}

void    sort(t_stack **stack_a, t_stack **stack_b)
{
    int count;

    count = count_stack(*stack_a);
    if (count == 2)
        sort_2(stack_a);
    else if (count == 3)
        sort_3(stack_a);
    else if (count == 4)
        sort_4(stack_a, stack_b);
    else if (count == 5)
        sort_5(stack_a, stack_b);
}
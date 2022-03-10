/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:36:44 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/10 16:22:33 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = NULL;
    (void)stack_b;
    if (ac <= 1)
    {
        printf("Usage: ./push_swap <arg>\n");
        return (1);
    }
    if (ft_check(ac, av, &stack_a) == 0)
    {
        while (stack_a != NULL)
        {
            printf("%d\n", stack_a->content);
            stack_a = stack_a->next;
        }
        printf("_  _\n");
        printf("a  b\n");
    }
}
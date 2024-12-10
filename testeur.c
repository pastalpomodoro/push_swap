#include "push_swap.h"

void print_a(t_num **pile_a)
{
    t_num *temp;

    temp = *pile_a;
    while (temp != NULL)
    {
        ft_printf("%d\n", temp->num);
        temp = temp->next;
    }
    ft_printf("\n");
}
void print_b(t_num **pile_b)
{
    t_num *temp;

    temp = *pile_b;
    while (temp != NULL)
    {
        ft_printf("%d\n", temp->num);
        temp = temp->next;
    }
    ft_printf("\n");
}

int find_index(t_num *pile)
{
    t_num *temp;
    int    size;

    temp = pile;
    size = 0;
    while (pile != NULL)
    {
        if (if_smaller(temp, pile->num) == 1)
            return (size);
        size++; 
        pile = pile->next;
    }
    return (0);
}

int mooving(t_num **pile_a, t_num **pile_b)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (my_lstlen(pile_a) != 0)
    {
        i = find_index(*pile_a);
        while (find_index(*pile_a) != 0)
        {
            if (i > my_lstlen(pile_a) / 2)
                rra(pile_a);
            else
                ra(pile_a);
            count++;
        }
        pb(pile_a, pile_b);
        count++;
    }
    return (count);
}

void test(t_num **pile_a, t_num **pile_b)
{
    int count;
     
    count = mooving(pile_a, pile_b);
    print_b(pile_b);

    ft_printf("\nCOUNT: %d\n", count);
}

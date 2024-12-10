#include "push_swap.h"

// fonction qui permet de comprendre sy le numero passe en parametre est le plus petit de toute la pile
int if_smaller(t_num *pile, int n)
{
    while (pile != NULL)
    {
        if (n > pile->num)
            return (0);
        pile = pile->next;
    }
    return (1);
}
// fonction qui permet de comprendre sy le numero passe en parametre est le plus grand de toute la pile
int if_bigger(t_num *pile, int n)
{
    while (pile != NULL)
    {
        if (n < pile->num)
            return (0);
        pile = pile->next;
    }
    return (1);
}
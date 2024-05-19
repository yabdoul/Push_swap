#include "push_swap.h"
#include <stdio.h> 
#include <stdlib.h>
int check_arg(char * arg)
{
    int  i = 0 ; 
   while(arg[i])
        if(!ft_isdigit((int)arg[i++]))
          {
            printf("Error !\n");
            exit(1); 
          } 
     
}

int main(int ac , char **av)
{
    int  i = 1 ; 
    while(i < ac )
            check_arg(av[i++]) ; 
    int stack_a [ac -1]; 
    int stack_b [ac -1]; 
    return 0; 
} 
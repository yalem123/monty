#include "monty.h"
void _pint(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
if (*stack == NULL)
{
dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
free_stack_t(*stack);
exit(EXIT_FAILURE);
}
printf("%d\n", current->n);
}

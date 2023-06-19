#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main()
// {
// 	int	x;
// 	int	y;
	
// 	x = 2;
// 	y = 1;
// 	ft_swap(&x, &y);
// 	printf("%d \n %d", x, y);
// }
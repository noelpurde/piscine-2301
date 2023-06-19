#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main()
// {
// 	int x;
// 	int	y;

// 	x = 1;
// 	y = 2;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d \n %d", x, y);
// }
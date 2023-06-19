#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

// int	main()
// {
// 	int arr[3] = {1, 2, 3};
// 	int size = 3;

// 	ft_rev_int_tab(arr, size);
// 	printf("%d, %d, %d", arr[0], arr[1], arr[2]); 
// 	return (0);
// }
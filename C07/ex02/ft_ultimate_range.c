#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		index;
	int		*buffer;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	d = (buffer = malloc(bound * sizeof(int)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}
// int		main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*arr;
// 	int	size;
// 	int	i = 0;

// 	min = 1;
// 	max = 10;
// 	size = ft_ultimate_range(&arr, min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", arr[i]);
// 		i++;
// 	}

// }
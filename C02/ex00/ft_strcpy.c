#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char src[] = "42";
// 	char src1[] = "42";
// 	char dest[] = "dsjksjd";
// 	char dest1[] = "dsjksjd";
// 	printf("%s", ft_strcpy(dest, src));
// 	printf("\n%s", strcpy(dest1, src1));
// }
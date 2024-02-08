/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@42.mg>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:55:18 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/08 17:23:28 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	buffer_element(char *buffer);

struct parsing
{
	char	key;
	char	*value;
};


struct	parsing *pars(char *buffer)
{
	int	i;
	int	j;
	int	k;
	int	count;
	int	array_size;
	struct parsing *dict_array;

	array_size = buffer_element(buffer);
	dict_array = (struct parsing *)malloc(array_size * sizeof(struct parsing));
	if (!dict_array)
		return NULL;
	i = 0;
	j = 0;
	while (buffer[i] != '\0')
	{
		while (buffer[i] != '\0' && buffer[i] == ' ')
			i++;
		if (buffer[i] >= 'A' && buffer[i] <= 'Z')
			dict_array[j].key = buffer[i];
		i++;
		while (buffer[i] != '\0' && (buffer[i] == ' ' || buffer[i] == ':'))
			i++;
		count = 0;
		while (buffer[i] != '\0' && buffer[i] != '\n')
		{
			count++;
			i++;
		}
		i = i - count;
		k = 0;
		dict_array[j].value = (char *)malloc(sizeof(char) * count + 1);
		while (buffer[i] != '\0' && buffer[i] != '\n')
		{
			dict_array[j].value[k] = buffer[i];
			i++;
			k++;
		}
		dict_array[j].value[k] = '\0';
		i++;
		j++;
	}
	dict_array[array_size].key = '\0';
	dict_array[array_size].value = NULL;
	return (dict_array);
}

int	buffer_element(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count + 1);
}

int	buffer_size(char *dict)
{
	char	c;
	int		fd;
	int		size;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		printf("Dict error!!\n");
		return (0);
	}
	size = 0;
	while (read(fd, &c, 1))
	{
		size++;
	}
	close(fd);
	return (size);
}

char	*buffer(char *dict)
{
	char	*buffer;
	char	c;
	int		fd;
	int		i;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		printf("Dict error!!\n");
		return (0);
	}
	buffer = (char *)malloc(sizeof(char) * buffer_size(dict) + 1);
	i = 0;
	while (read(fd, &c, 1))
	{
		buffer[i] = c;
		i++;
	}
	buffer[i] = '\0';
	close(fd);
	return (buffer);
}

char	*check_value(char c, struct parsing *parsed_data, char *buffer)
{
	int	i;

	i = 0;
	while (i < buffer_element(buffer))
	{
		if (c == parsed_data[i].key)
			return (parsed_data[i].value);
		i++;
	}
	return NULL;
}

void	print_output(char *str, struct parsing *parsed_data, char *buffer)
{
	int	i;

	while (str[i] != '\0')
	{
		printf("%s\n", check_value(str[i], parsed_data, buffer));
		i++;
	}
}

int	main(void)
{
	char	dict[] = "alpha.dict.txt";
	char	*output = buffer(dict);
	char	str[] = "ANDYH";
	struct parsing *parsedData = pars(output);
	if (parsedData != NULL)
	{
		print_output(str, parsedData, output);
		free(parsedData);
		free(output);
	}
	else
	{
		printf("Parsing failed.\n");
	}
}


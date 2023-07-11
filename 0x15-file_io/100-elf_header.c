		i = end;
		while (head[i] == 0 && i > 0x18)
			i--;
		printf("%x", head[i--]);
		while (i >= 0x18)
			printf("%02x", (unsigned char) head[i--]);
		printf("\n");
	}
	else
	{
		i = 0x18;
		while (head[i] == 0)
			i++;
		printf("%x", head[i++]);
		while (i <= end)
			printf("%02x", (unsigned char) head[i++]);
		printf("\n");
	}
}

/**
 * main - parses an elf header file
 *
 * @ac: number of args
 * @av: arugment strings
 *
 * Return: 0 on success
 * 1 on incorrect arg number
 * 2 on file open failure
 * 3 on read failure
 * 4 on failure to read enough bytes for a 32 bit file
 * 98 if elf magic is not matched
 */
int main(int ac, char *av[])
{
	int ifile, i;
	char head[32];

	if (ac != 2)
		return (1);
	ifile = open(av[1], O_RDONLY);
	if (ifile == -1)
		return (1);
	i = read(ifile, head, 32);
	if (i == -1)
		return (1);
	if (i < 28)
		return (1);
	if (head[0] != 0x7f || head[1] != 'E' || head[2] != 'L' || head[3] != 'F')
	{
		dprintf(STDERR_FILENO,
			"readelf: Error: hellofile: Failed to read file header\n");
		return (98);
	}
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", (unsigned int) head[i]);
	printf("\n");
	printclass(head);
	printdata(head);
	printversion(head);
	printabi(head);
	printtype(head);
	printentry(head);
	return (0);
}

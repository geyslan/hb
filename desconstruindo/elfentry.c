#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <elf.h>

int main() {

	Elf32_Ehdr *elfheader;	// Elf Header
	unsigned char *file;	// File pointer
	int fd;			// File Descriptor
	struct stat st;		// Struct to retrieve the file status (Size)

	// Creating a new file descriptor
	fd = open("programa2", O_RDONLY);

	// Retrieving the file status
	fstat(fd, &st);

	// Creating a new mapping in VAS filled with the programa2 
	file = mmap(0, st.st_size, PROT_READ, MAP_SHARED, fd, 0);

	// Get Elf Header
	elfheader = (Elf32_Ehdr *) file;

	// Print Entry Point
	printf("Entry Point: %p\n", elfheader->e_entry);

	// Close file descriptor
	close(fd);	

	return 0;
}

#include <stdio.h>
#include <string.h>
#include <elf.h>

int main() {

	printf("32 bits --------------------------\n\n");

	printf("Tamanho do Elf32_Ehdr:    %d bytes\n\n", sizeof (Elf32_Ehdr));

	printf("Tamanho do Elf32_Addr:    %d bytes\n", sizeof (Elf32_Addr));
	printf("Tamanho do Elf32_Off:     %d bytes\n", sizeof (Elf32_Off));
	printf("Tamanho do Elf32_Section: %d bytes\n", sizeof (Elf32_Section));
	printf("Tamanho do Elf32_Versym:  %d bytes\n", sizeof (Elf32_Versym));
	printf("Tamanho do Elf32_Half:    %d bytes\n", sizeof (Elf32_Half));
	printf("Tamanho do Elf32_Sword:   %d bytes\n", sizeof (Elf32_Sword));
	printf("Tamanho do Elf32_Word:    %d bytes\n", sizeof (Elf32_Word));
	printf("Tamanho do Elf32_Sxword:  %d bytes\n", sizeof (Elf32_Sxword));
	printf("Tamanho do Elf32_Xword:   %d bytes\n\n", sizeof (Elf32_Xword));


	printf("64 bits --------------------------\n\n");

	printf("Tamanho do Elf64_Ehdr:    %d bytes\n\n", sizeof (Elf64_Ehdr));

        printf("Tamanho do Elf64_Addr:    %d bytes\n", sizeof (Elf64_Addr));
        printf("Tamanho do Elf64_Off:     %d bytes\n", sizeof (Elf64_Off));
        printf("Tamanho do Elf64_Section: %d bytes\n", sizeof (Elf64_Section));
        printf("Tamanho do Elf64_Versym:  %d bytes\n", sizeof (Elf64_Versym));
        printf("Tamanho do Elf64_Half:    %d bytes\n", sizeof (Elf64_Half));
        printf("Tamanho do Elf64_Sword:   %d bytes\n", sizeof (Elf64_Sword));
        printf("Tamanho do Elf64_Word:    %d bytes\n", sizeof (Elf64_Word));
        printf("Tamanho do Elf64_Sxword:  %d bytes\n", sizeof (Elf64_Sxword));
        printf("Tamanho do Elf64_Xword:   %d bytes\n\n", sizeof (Elf64_Xword));

	return 0;
}

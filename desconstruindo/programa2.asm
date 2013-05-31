; Programa 2 - Assembly Language - Linux/x86
; Copyright (C) 2013 Geyslan G. Bem, Hacking bits
;
;   http://hackingbits.com
;   geyslan@gmail.com
;
; This program is free software: you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.
;
; You should have received a copy of the GNU General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.


;   programa2
;
;   * Hello World
;
;
;   # nasm -f elf32 programa2.asm
;   # ld -m elf_i386 programa2.o -o programa2
;   
;   Testing
;   # ./programa2


global _start

section .data
	msg: db "Hello World", 0xA
	mlen equ $ - msg

section .text

_start:

	mov eax, 4
	mov ebx, 1
	mov ecx, msg
	mov edx, mlen
	int 0x80

	mov eax, 1
	dec ebx
	int 0x80

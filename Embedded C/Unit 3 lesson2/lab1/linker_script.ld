ENTRY(reset)
MEMORY
{
	Mem : o = 0x00000000, l = 64M
}

SECTIONS
{ . = 0x10000 ;
.startup . : {
startup.o(.text)
} >Mem
.text :
{
*(.text)
} >Mem
.data : {
*(.data)
} >Mem
.other : {
*(COMMON) *(.bss) *(.rodata)
} >Mem

. = . + 0x1000 ;
stack_top = . ;
}
MEMORY
{
	Flash(rx) : o = 0x08000000 , l = 128k
	RAM(rxw) :  o = 0x20000000 , l = 20k

}
SECTIONS
{
.text :
{ *(.vectors)
  *(.text)
E_text = . ;

} > Flash

.data :
{ S_data = . ; 
*(.data)
E_data = . ; 
} > RAM AT> Flash

.bss :
{S_bss = . ; 
*(.bss)
E_bss = . ; 
}> RAM
. = . + 0x1000;
stack_top = .;



}
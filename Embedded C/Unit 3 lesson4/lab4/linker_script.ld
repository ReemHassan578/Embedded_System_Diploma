MEMORY
{
	Flash(rx) : o = 0x00000000 , l = 512M
	RAM(rxw) :  o = 0x20000000 , l = 512M

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




}

MEMORY
{ 
	Flash : o = 0x08000000, l = 128k
  	RAM : o = 0x20000000, l = 20k
}

SECTIONS 
{
.text : {
 *(.vectors)
 *(.text)
} > Flash
}



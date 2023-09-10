.section .vectors
.word 0x20001000
.word reset
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler

.section .text 
reset:
	bl main
	b .

.thumb_func

Vector_handler :
	b reset
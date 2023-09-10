extern unsigned int E_text;
extern unsigned int S_data;
extern unsigned int E_data;
extern unsigned int E_bss;
extern unsigned int S_bss;
extern unsigned int stack_top;
extern int main(void);

void reset(void)
{ unsigned int size = (unsigned char* )&E_data -( unsigned char*)&S_data;
unsigned char* P_des=(unsigned char*)&S_data;  
unsigned char* P_Src=(unsigned char*)&E_text;
int i;
for(i=0; i<size;i++) 
{
*(P_des++)=*(P_Src++);
}

 size = (unsigned int* )&E_bss -( unsigned int*)&S_bss;
 P_des=(unsigned char*)&S_bss; 
for(i=0; i<size;i++) 
{
*(P_des++)=(unsigned char)0;
}

	main();
}
void default_handler()
{
	reset();
}
void NMI_Handler(void)__attribute__((weak,alias("default_handler")));
void H_fault_Handler(void)__attribute__((weak,alias("default_handler")));
void MM_Fault_Handler(void)__attribute__((weak,alias("default_handler")));
void Bus_Fault(void)__attribute__((weak,alias("default_handler")));
void Usage_Fault_Handler(void)__attribute__((weak,alias("default_handler")));

unsigned int vectors[] __attribute__((section(".vectors")))={
(unsigned int )&stack_top,
(unsigned int )&reset,
(unsigned int )&NMI_Handler,
(unsigned int )&H_fault_Handler,
(unsigned int )&MM_Fault_Handler,
(unsigned int )&Bus_Fault,
(unsigned int )&Usage_Fault_Handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
(unsigned int )&default_handler,
};


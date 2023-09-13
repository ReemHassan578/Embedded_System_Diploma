extern unsigned int E_text;
extern unsigned int S_data;
extern unsigned int E_data;
extern unsigned int E_bss;
extern unsigned int S_bss;
static unsigned int stack_top[256];
extern int main(void);

void reset(void)
{
 unsigned int size = (unsigned char* )&E_data -( unsigned char*)&S_data;
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

void (* const vectors[]) () __attribute__((section(".vectors")))={
(void (*) () ) (stack_top + sizeof(stack_top )/sizeof(stack_top[0])),
&reset,
&NMI_Handler,
&H_fault_Handler,
&MM_Fault_Handler,
&Bus_Fault,
&Usage_Fault_Handler,

};


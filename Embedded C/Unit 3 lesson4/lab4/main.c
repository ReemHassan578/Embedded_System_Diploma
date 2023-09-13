#define SYSCTL 0x400FE000
#define  GPIOF 0x40025000
#define  SYSCTR_RCGC2_R  *((volatile unsigned int *)(SYSCTL + 0x108))
#define  GPIO_PORTF_DIR_R *((volatile unsigned int *)( GPIOF + 0x400))
#define  GPIO_PORTF_DEN_R *((volatile unsigned int *)( GPIOF + 0x51C))
#define  GPIO_PORTF_DATA_R *((volatile unsigned int *)(GPIOF + 0x3FC))

int main (void)
{
SYSCTR_RCGC2_R =0x00000020;
volatile unsigned int i;
for(i=0;i<2000;i++);
GPIO_PORTF_DEN_R |=1<<3;
GPIO_PORTF_DIR_R |=1<<3;
while(1)
{
GPIO_PORTF_DATA_R |=1<<3;
for(i=0;i<200000;i++);
GPIO_PORTF_DATA_R &=~(1<<3);
for(i=0;i<200000;i++);

} 
 


return 0 ;
}
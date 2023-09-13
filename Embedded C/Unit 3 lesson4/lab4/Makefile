CC = arm-none-eabi
CFLAGS = -gdwarf-2 -mcpu=cortex-m4 -g
INCS = -I .
LIBS = 
SRC = $(wildcard *.c)
OBJ =$(SRC:.c=.o)
As =$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name = lab4

all : $(Project_name).bin

%.o : %.s
	$(CC)-as $(CFLAGS) $< -o $@

%.o : %.c
	$(CC)-gcc -c  $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf : $(OBJ) $(AsOBJ)
	$(CC)-ld -T linker_script.ld  $(LIBS) -Map=output.map $(OBJ) $(AsOBJ) -o $@
	cp $(Project_name).elf $(Project_name).axf 	

$(Project_name).bin : $(Project_name).elf
	$(CC)-objcopy -O binary $< $@

clear :
	rm *.elf *.bin

clear_all :
	rm *.o *.elf *.bin



 
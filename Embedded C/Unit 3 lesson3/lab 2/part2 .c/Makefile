CC = arm-none-eabi
CFLAGS = -gdwarf-2 -mcpu=cortex-m3
INCS = -I .
LIBS = 
SRC = $(wildcard *.c)
OBJ =$(SRC:.c=.o)
As =$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name = lab2

all : $(Project_name).hex

%.o : %.s
	$(CC)-as $(CFLAGS) $< -o $@

%.o : %.c
	$(CC)-gcc -c  $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf : $(OBJ) $(AsOBJ)
	$(CC)-ld -T linker_script.ld  $(LIBS) -Map=output.map $(OBJ) $(AsOBJ) -o $@

$(Project_name).hex : $(Project_name).elf
	$(CC)-objcopy -O binary $< $@

clear :
	rm *.elf *.bin

clear_all :
	rm *.o *.elf *.bin



 
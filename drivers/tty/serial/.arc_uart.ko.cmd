cmd_drivers/tty/serial/arc_uart.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/serial/arc_uart.ko drivers/tty/serial/arc_uart.o drivers/tty/serial/arc_uart.mod.o

cmd_drivers/misc/mei/mei.o := ld -m elf_x86_64   -r -o drivers/misc/mei/mei.o drivers/misc/mei/init.o drivers/misc/mei/hbm.o drivers/misc/mei/interrupt.o drivers/misc/mei/client.o drivers/misc/mei/main.o drivers/misc/mei/amthif.o drivers/misc/mei/wd.o drivers/misc/mei/bus.o drivers/misc/mei/bus-fixup.o drivers/misc/mei/debugfs.o drivers/misc/mei/mei-trace.o 
ifneq ($(KERNELRELEASE),)
obj-m := aufs.o
aufs-objs := super.o file.o
CFLAGS_inode.o := -DDEBUG
CFLAGS_file.o := -DDEBUG
else
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
endif

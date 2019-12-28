obj-m +=hello.o
all:
	make -C /lib/modules/4.9.35-v7+/build/ M=$(PWD) modules
clean:
	make -C /lib/modules/4.9.35-v7+/build/ M=$(PWD) clean


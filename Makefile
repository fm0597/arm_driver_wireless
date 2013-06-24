# hello.o:
# 	gcc -D__KERNEL__ -DMODULE  - DLINUX -I /usr/src/linux/include -c -o hello.o test.c

# clean:
# 	rm -f *.o

obj-m += test.o
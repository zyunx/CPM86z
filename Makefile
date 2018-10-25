

qemu: a.img
	qemu-system-i386 -fda a.img -boot a

a.img: tools/build
	tools/build > a.img

tools/build: tools/build.c

clean:
	rm -f a.img
	rm -f tools/build

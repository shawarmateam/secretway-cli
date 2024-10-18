# vars
BUILD_D = bin
CODE_D = src

# cmds
all: build

build: ./${CODE_D}/main.c
	gcc -o ${BUILD_D}/main.o ${CODE_D}/main.c

run: build
	./${BUILD_D}/main.o

clean:
	rm -rf ./${BUILD_D}/*


# aliases
clr: clean

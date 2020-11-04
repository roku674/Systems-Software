all: sortrandom

sortrandom : myMain.c mysort.c
	gcc myMain.c mysort.c -o sortrandom

CC=g++
CFLAGS = -Wall -Wextra
EXEC=VizPlot
MAIN=src/main.cpp

main:src/main.cpp
	$(CC) -o build/$(EXEC) $? $(CFLAGS) `sdl2-config --cflags --libs` -std=c++11
run:
	build/$(EXEC)

clear:
	rm build/* 

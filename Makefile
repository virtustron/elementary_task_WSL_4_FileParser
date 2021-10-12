src = ./src/
bin = ./bin/

#all: 
#	g++ -c $(src)ChessBoardConsoleUI.cpp -o $(bin)ChessBoardConsoleUI.o
#	g++ -c $(src)main.cpp -o $(bin)main.o
#	g++ -o $(bin)main $(bin)main.o $(bin)ChessBoardConsoleUI.o
all: main
		
main: build_all
	g++ -g -o $(bin)main $(bin)main.o $(bin)TextFile.o $(bin)TextFileParser.o

build_all:
	g++ -g -o $(bin)TextFileParser.o -c $(src)TextFileParser.cpp
	g++ -g -o $(bin)TextFile.o -c $(src)TextFile.cpp
	g++ -g -o $(bin)main.o -c $(src)main.cpp










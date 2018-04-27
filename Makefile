all: prueba_hilo.o
	g++ -Wall -pedantic -lpthread -o prueba_hilo prueba_hilo.o

prueba_hilo.o: prueba_hilo.cpp
	g++ -Wall -pedantic -std=c++0x -enable-libstdcxx-time -D_GLIBCXX_USE_NANOSLEEP -c prueba_hilo.cpp

clean:
	rm *.o
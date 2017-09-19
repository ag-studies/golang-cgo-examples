all: clean lib run go

lib:
			g++ -O2 -c opencv_local.c.cpp
			ar q libopencv_local.a opencv_local.c.o

run:
			g++ -L/usr/local/lib  -lopencv_core -lopencv_highgui -lopencv_videoio -lstdc++ \
			-L. -lopencv_local -o main.run main.cpp
			
clean:
			rm -rf lib/*.o
			rm -rf lib/*.a
			rm -rf lib/*.run

go:
			go build -ldflags -s opencv.go

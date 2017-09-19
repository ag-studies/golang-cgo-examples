all: clean lib go

lib:
			g++ -O2 -c cfoo.cpp
			g++ -O2 -c foo.cpp
			ar q libfoo.a cfoo.o foo.o
			
clean:
			rm -rf lib/*.o
			rm -rf lib/*.a

go:
			go build -ldflags -s main.go

package main

//#cgo LDFLAGS: -L${SRCDIR} -lmylib -lc++ -s -w -lstdc++
//#include "mylib.hpp"
import "C"

func main() {
	//to char*
	cstr := C.CString("Ari Garcia")
	//process hello in c
	resl := C.hello(cstr)
	//to string (go)
	gstr := C.GoString(resl)
	//result
	println(gstr)
}

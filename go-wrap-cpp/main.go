package main

// #cgo LDFLAGS: -L${SRCDIR} -lfoo -lc++ -s -w
// #include "foo.h"
// #include <stdlib.h>
import "C"

type GoFoo struct {
	foo C.Foo
}

func (f GoFoo) Free() {
	C.FooFree(f.foo)
}

func (f GoFoo) Bar() {
	C.FooBar(f.foo)
}

func New() GoFoo {
	var ret GoFoo
	ret.foo = C.FooInit()
	return ret
}

func main() {
	foo := New()
	foo.Bar()
	foo.Free()
}

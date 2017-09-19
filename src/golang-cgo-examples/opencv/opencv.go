package main

/*
  //export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig
  #cgo CFLAGS: -v
  #cgo LDFLAGS: -s -w -L${SRCDIR} -lopencv_local -lstdc++
  #cgo LDFLAGS: -L/System/Library/Frameworks -framework OpenCL -framework Cocoa -framework Accelerate -framework AVFoundation -framework CoreGraphics -framework CoreMedia -framework CoreVideo -framework QuartzCore
  #cgo darwin pkg-config: --cflags --libs opencv
  #include <stdio.h>
  #include "opencv_local.h"
*/
import "C"

import (
	"fmt"
)

func main() {
	//
	theFilename := "drop.mp4"
	theFilenameString := C.CString(theFilename)
	//
	result := C.hello(theFilenameString)
	fmt.Printf("%v\n", C.GoString(result))
	//
	C.openVideo(theFilenameString)
}

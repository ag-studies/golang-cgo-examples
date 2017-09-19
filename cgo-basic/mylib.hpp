#ifndef MYLIB_HPP
#define MYLIB_HPP

#ifdef __cplusplus
#define EXTERNC extern "C"
#else
#define EXTERNC
#endif

EXTERNC char* hello(char* n);

#endif //OPENCV_IMPLEMENTATION_HPP
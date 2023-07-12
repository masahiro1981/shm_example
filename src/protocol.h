#ifndef PROTOCOL_H
#define PROTOCOL_H
#include <sys/types.h>
#define NAME "/snap.hiro-shm.writer"

#define NUM 3555
//#define SIZE (NUM * sizeof(int))
#define SIZE ((off_t)5 * 1024 * 1024 * 1024) 
#endif


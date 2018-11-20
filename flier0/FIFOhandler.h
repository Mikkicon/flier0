#pragma once

#ifndef FIFOHANDLER_H_
#define FIFOHANDLER_H_
#include "TAVProperty.h"
class FIFOhandler
{
private:
	/*
	int _allocated=0;
	int _bideirectional = 0;
	int _user_open = 0;
	struct _task_struct * opener;
	char * base;
	int _buffsize;
	int _start = 0;
	int _len = 0;
	int(*user_handler)(unsigned int fifo);
	int(*rt_handler)(unsigned int fifo);
	int(*user_ioctl)(unsigned int fifo, unsigned int cmd, unsigned int arg);
	struct _module*creator;
	struct _wait_queue*wait;
	*/
public:
	FIFOhandler();

	virtual ~FIFOhandler();
};



#endif /* FIFOHANDLER_H_ */

#ifndef __debug_log__
#define __debug_log__

#define __DEBUG_TO_LOG__

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdarg.h>

void DEBUG_LOG(const char *msg, ...);

class LOG {
private:
	static LOG *m_log;	
	FILE *fp;
	char filepath[32];
	char message[256];
	time_t tim;
	struct tm *t;
private:
	LOG();
	~LOG();
public:
	static LOG *get_share_log(); 
	void write_log(const char *msg);
};

#endif

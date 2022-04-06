
#ifndef _MD5SUM_H_
#define _MD5SUM_H_

typedef struct {
	int error;
	char * hash;
} md5res_t;

md5res_t hash(char *);

#endif

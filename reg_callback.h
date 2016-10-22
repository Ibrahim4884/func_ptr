#ifndef __HEADER_H_
#define __HEADER_H_

#include <stdio.h>

typedef void (*callback)(void);
void register_callback(callback ptr_reg_callback);

#endif 


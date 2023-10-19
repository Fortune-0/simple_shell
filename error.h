#ifndef _ERROR_H
#define _ERROR_H
/** 
 * handles all the errors
 */

#include "shell.h"

char *message_selector(generalt info);
void error(generalt *info);
void error_extra(const char *info, char *extra);

#endif /* ERROR_H */

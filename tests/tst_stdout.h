#ifndef TST_STDOUT_H
#define TST_STDOUT_H

#include <gtest/gtest.h>

#include<fstream>

// dup, dup2
#include <unistd.h>

#include <fcntl.h>

extern "C" {
#include "myfunc.h"
}


#define MAXLINE 1024


#endif // TST_STDOUT_H

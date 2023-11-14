#ifndef FIND_ROOTS_H
#define FIND_ROOTS_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(find_roots_test, file)
{
    double *arr = find_roots(4,-1,-5);
    ASSERT_EQ(arr[0], 1.25);
}


#endif // FIBONACHI_H
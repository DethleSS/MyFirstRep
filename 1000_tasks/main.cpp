#include <iostream>
#include "task_begin.h"
#include "task_boolean.h"
#include "task_case.h"
#include "task_for.h"
#include "task_if.h"
#include "task_integer.h"
#include "task_while.h"
#include "task_array.h"
int main()
{
    run_tasks_begin();
    run_tasks_integer();
    run_tasks_boolean();
    run_tasks_if();
    run_tasks_for();
    run_tasks_array();
    return 0;
}

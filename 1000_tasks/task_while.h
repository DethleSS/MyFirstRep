#ifndef TASK_WHILE_H_INCLUDED
#define TASK_WHILE_H_INCLUDED


int while_1(int a, int b)
{
    while(a >= b)
    {
        a -= b;
    }
    return a;
}

int while_2(int a, int b)
{
    int counter = 0;
    while(a >= b)
    {
        a -= b;
        ++counter;
    }
    return counter;
}

void while_3(int n, int k)
{
    int counter = 0;
    while( n >= k)
    {
        n -= k;
         ++counter;
    }
    std::cout << counter << " " << n << std::endl;
}



void run_tasks_while()
{
    //while_3(10,5);
};

#endif // TASK_WHILE_H_INCLUDED

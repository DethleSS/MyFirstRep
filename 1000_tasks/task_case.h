#ifndef TASK_CASE_H_INCLUDED
#define TASK_CASE_H_INCLUDED

void case_1 (int n)
{
    switch(n)
    {
    case(1):
    {
        std::cout << "Monday";
        break;
    }
    case(2):
    {
        std::cout << "Tuesday";
        break;
    }
    case(3):
    {
        std::cout << "Wednesday";
        break;
    }
    case(4):
    {
        std::cout << "Thursday";
        break;
    }
    case(5):
    {
        std::cout << "Friday";
        break;
    }
    case(6):
    {
        std::cout << "Saturday";
        break;
    }
    case(7):
    {
        std::cout << "Sunday";
        break;
    }
    default:
        std::cout << "No such day";
    }
}

void case_2(int k)
{
    switch(k)
    {
    case(1):
    {
        std::cout << "Bad";
        break;
    }
    case(2):
    {
        std::cout << "Unsatisfactory";
        break;
    }
    case(3):
    {
        std::cout << "satisfactorily";
        break;
    }
    case(4):
    {
        std::cout << "Good";
        break;
    }
    case(5):
    {
        std::cout << "Fine";
        break;
    }
    default:
        std::cout << "Mistake";
    }
}

void case_3 (int n)
{
    switch(n)
    {
    case(1):
    {
        std::cout << "Winter";
        break;
    }
    case(2):
    {
        std::cout << "Winter";
        break;
    }
    case(3):
    {
        std::cout << "Winter";
        break;
    }
    case(4):
    {
        std::cout << "Spring";
        break;
    }
    case(5):
    {
        std::cout << "Spring";
        break;
    }
    case(6):
    {
        std::cout << "Spring";
        break;
    }
    case(7):
    {
        std::cout << "Summer";
        break;
    }
    case(8):
    {
        std::cout << "Summer";
        break;
    }
    case(9):
    {
        std::cout << "Summer";
        break;
    }
    case(10):
    {
        std::cout << "Autumn";
        break;
    }
    case(11):
    {
        std::cout << "Autumn";
        break;
    }
    case(12):
    {
        std::cout << "Autumn";
        break;
    }
    default:
        std::cout << "No such month";
    }
}

void case_4 (int n)
{
    switch(n)
    {
    case(1):
    {
        std::cout << "31 Days";
        break;
    }
    case(2):
    {
        std::cout << "28 Days";
        break;
    }
    case(3):
    {
        std::cout << "31 Days";
        break;
    }
    case(4):
    {
        std::cout << "30 Days";
        break;
    }
    case(5):
    {
        std::cout << "31 Days";
        break;
    }
    case(6):
    {
        std::cout << "30 Days";
        break;
    }
    case(7):
    {
        std::cout << "31 Days";
        break;
    }
    case(8):
    {
        std::cout << "31 Days";
        break;
    }
    case(9):
    {
        std::cout << "30 Days";
        break;
    }
    case(10):
    {
        std::cout << "31 Days";
        break;
    }
    case(11):
    {
        std::cout << "30 Days";
        break;
    }
    case(12):
    {
        std::cout << "31 Days";
        break;
    }
    default:
        std::cout << "No such month";
    }
}

void case_5 (double a, double b, int n)
{
    switch(n)
    {
        case(1):
    {
        std::cout << "Sum " << a + b;
        break;
    }
    case(2):
    {
        std::cout << "Subtraction " << a - b;
        break;
    }
    case(3):
    {
        std::cout << "Mul " << a * b;
        break;
    }
    case(4):
    {
        std::cout << "Division " << a / b;
        break;
    }
    default :
        std::cout << "No such operation";
    }
}

void case_6 (int value)
{
    switch (value);
}

void run_taska_case()
{
    case_5(1.0,2.0,4);
};

#endif // TASK_CASE_H_INCLUDED

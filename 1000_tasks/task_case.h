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

void case_6 (double value, int n)
{
    switch (n)
    {
    case(1):
    {
        std::cout << "Decimeter " << value / 10.0 ;
        break;
    }
    case(2):
    {
        std::cout << "Kilometer " << value / 1000.0 ;
        break;
    }
    case(3):
    {
        std::cout << "Meter " << value / 100.0 ;
        break;
    }
    case(4):
    {
        std::cout << "Millimeter " << value * 10.0 ;
        break;
    }
    case(5):
    {
        std::cout << "Centimeter " << value ;
        break;
    }
    }
}

void case_7 (double value, int n)
{
    switch (n)
    {
    case(1):
    {
        std::cout << "Kilogram " << value / 1000.0 ;
        break;
    }
    case(2):
    {
        std::cout << "Milligram " << value * 1000.0 ;
        break;
    }
    case(3):
    {
        std::cout << "Gram " << value ;
        break;
    }
    case(4):
    {
        std::cout << "Ton " << value / 10000000.0 ;
        break;
    }
    case(5):
    {
        std::cout << "Centner " << value / 1000000.0 ;
        break;
    }
    }
}



void case_15(int m_value, int m_suit)
{
    switch(m_value)
    {
    case(6):
        std::cout << "6 ";
        break;
    case(7):
        std::cout << "7 ";
        break;
    case(8):
        std::cout << "8 ";
        break;
    case(9):
        std::cout << "9 ";
        break;
    case(10):
        std::cout << "10 ";
        break;
    case(11):
        std::cout << "Jack ";
        break;
    case(12):
        std::cout << "Queen ";
        break;
    case(13):
        std::cout << "King ";
        break;
    case(14):
        std::cout << "Ace ";
        break;
    }

    switch(m_suit)
    {
    case (1):
        std::cout << "Hearts ";
        break;
    case (2):
        std::cout << "Diamonds ";
        break;
    case (3):
        std::cout << "Spades ";
        break;
    case (4):
        std::cout << "Clubs ";
        break;
    }
}

void case_18(int value)
{
    switch(value)
    {

    }
}
void run_tasks_case()
{
    case_7(1000, 2);
};

#endif // TASK_CASE_H_INCLUDED

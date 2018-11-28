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
    case(2):
    case(3):
        std::cout << "Winter";
        break;
    case(4):
    case(5):
    case(6):
        std::cout << "Spring";
        break;
    case(7):
    case(8):
    case(9):
        std::cout << "Summer";
        break;
    case(10):
    case(11):
    case(12):
        std::cout << "Autumn";
        break;
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

void case_16(int value)
{
    switch(value / 10)
        {
        case(2):
            std::cout << "Twenty";
            break;
        case(3):
            std::cout << "Thirty";
            break;
        case(4):
            std::cout << "Forty";
            break;
        case(5):
            std::cout << "fifty";
            break;
        case(6):
            std::cout << "Sixty";
            break;
        case(7):
            std::cout << "Seventy";
            break;
        case(8):
            std::cout << "Eighty";
            break;
        case(9):
            std::cout << "Ninety";
            break;
        }
        switch(value % 10)
    {
    case(0):
        std::cout << "";
        break;
    case(1):
        std::cout << " One";
        break;
    case(2):
        std::cout << " Two";
        break;
    case(3):
        std::cout << " Three";
        break;
    case(4):
        std::cout << " Four";
        break;
    case(5):
        std::cout << " Five";
        break;
    case(6):
        std::cout << " Six";
        break;
    case(7):
        std::cout << " Seven";
        break;
    case(8):
        std::cout << " Eight";
        break;
    case(9):
        std::cout << " Nine";
        break;
    }
std::cout << " year";
}

void case_17(int value)
{
    switch(value / 10)
        {
        case(2):
            std::cout << " Twenty";
            break;
        case(3):
            std::cout << " Thirty";
            break;
        case(4):
            std::cout << " Forty";
            break;
        case(5):
            std::cout << " fifty";
            break;
        case(6):
            std::cout << " Sixty";
            break;
        case(7):
            std::cout << " Seventy";
            break;
        case(8):
            std::cout << " Eighty";
            break;
        case(9):
            std::cout << " Ninety";
            break;
        }

    if(value / 10 == 1)
    {
        switch(value % 10)
        {
        case(0):
            std::cout << " Ten";
            break;
        case(1):
            std::cout << "Eleven";
            break;
        case(2):
            std::cout << "Twelve";
            break;
        case(3):
            std::cout << "Thirteen";
            break;
        case(4):
            std::cout << "Fourteen";
            break;
        case(5):
            std::cout << "Fifteen";
            break;
        case(6):
            std::cout << "Sixteen";
            break;
        case(7):
            std::cout << "Seventeen";
            break;
        case(8):
            std::cout << "Eighteen";
            break;
        case(9):
            std::cout << "Nineteen";
            break;
        }
    }
    else
    {
        switch(value % 10)
    {
    case(0):
        std::cout << "";
        break;
    case(1):
        std::cout << " One";
        break;
    case(2):
        std::cout << " Two";
        break;
    case(3):
        std::cout << " Three";
        break;
    case(4):
        std::cout << " Four";
        break;
    case(5):
        std::cout << " Five";
        break;
    case(6):
        std::cout << " Six";
        break;
    case(7):
        std::cout << " Seven";
        break;
    case(8):
        std::cout << " Eight";
        break;
    case(9):
        std::cout << " Nine";
        break;
    }
    }
std::cout << " learning tasks";


}

void case_18(int value)
{
    switch(value / 100)
    {
    case(1):
        std::cout << "One";
        break;
    case(2):
        std::cout << "Two";
        break;
    case(3):
        std::cout << "Three";
        break;
    case(4):
        std::cout << "Four";
        break;
    case(5):
        std::cout << "Five";
        break;
    case(6):
        std::cout << "Six";
        break;
    case(7):
        std::cout << "Seven";
        break;
    case(8):
        std::cout << "Eight";
        break;
    case(9):
        std::cout << "Nine";
        break;
    }
    if((value / 100) != 0)
    {
        std::cout << " hundred";
    }

    switch((value / 10) % 10)
    {
    case(2):
        std::cout << " Twenty";
        break;
    case(3):
        std::cout << " Thirty";
        break;
    case(4):
        std::cout << " Forty";
        break;
    case(5):
        std::cout << " fifty";
        break;
    case(6):
        std::cout << " Sixty";
        break;
    case(7):
        std::cout << " Seventy";
        break;
    case(8):
        std::cout << " Eighty";
        break;
    case(9):
        std::cout << " Ninety";
        break;
    }
    if((value / 10) % 10 == 1)
    {
        switch(value % 10)
        {
        case(0):
            std::cout << " Ten";
            break;
        case(1):
            std::cout << " Eleven";
            break;
        case(2):
            std::cout << " Twelve";
            break;
        case(3):
            std::cout << " Thirteen";
            break;
        case(4):
            std::cout << " Fourteen";
            break;
        case(5):
            std::cout << " Fifteen";
            break;
        case(6):
            std::cout << " Sixteen";
            break;
        case(7):
            std::cout << " Seventeen";
            break;
        case(8):
            std::cout << " Eighteen";
            break;
        case(9):
            std::cout << " Nineteen";
            break;
        }
    }
    else
    {
        switch(value % 10)
        {
        case(0):
            std::cout << "";
            break;
        case(1):
            std::cout << " One";
            break;
        case(2):
            std::cout << " Two";
            break;
        case(3):
            std::cout << " Three";
            break;
        case(4):
            std::cout << " Four";
            break;
        case(5):
            std::cout << " Five";
            break;
        case(6):
            std::cout << " Six";
            break;
        case(7):
            std::cout << " Seven";
            break;
        case(8):
            std::cout << " Eight";
            break;
        case(9):
            std::cout << " Nine";
            break;
        }
    }
}
void run_tasks_case()
{
    case_3(4);
};

#endif // TASK_CASE_H_INCLUDED

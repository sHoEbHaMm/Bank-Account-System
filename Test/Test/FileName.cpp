#include<vector>
#include<stdlib.h>
#include<iostream>
#include<Windows.h>

using namespace std;

vector<int> plusOne(vector<int>& digits) {

    int number = 0;
    vector<int> o_Vector;

    for (int i = 0; i < digits.size(); i++)
    {
        number += digits[i] * pow(10, digits.size() - i - 1);
    }
    number++;

    int temp;
    for (int i = 0; i < digits.size(); i++)
    {

        if (number > 0)
        {
            temp = number;
            temp /= pow(10, digits.size() - i - 1);
            number = number % (int)pow(10, digits.size() - i - 1);
        }
        o_Vector.push_back(temp);
    }

    return o_Vector;
}

int main()
{
    vector<int> newVector;
    vector<int> o_Vector;
    newVector.push_back(1);
    newVector.push_back(2);
    newVector.push_back(3);

    o_Vector = plusOne(newVector);


}
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
int main(int argc, char const ** argv)
{
    int age = 0;
    cout << "Whats your age?: ";
    cin >> age;
    cout << "Hello my name is Chibuikem Ohanele and my age is " << age << "." << endl;

    char * str = (char *)calloc(1, sizeof(char));

    vector <int> test1;

    test1.push_back(1);
    cout << test1.size() <<endl;
    cout << test1.at(0) << endl;
    str[0] = 'G';
    str[1] = 'o';
    str[2] = 'P';
    str[3] = 'u';
    str[4] = 'r';
    str[5] = 'd';
    str[6] = 'u';
    str[7] = 'e';
    
    cout<< str <<endl;

    return 0;
}

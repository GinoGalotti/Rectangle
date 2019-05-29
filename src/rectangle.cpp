#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    cout<<"Hello World"<<endl;
    cin.get();

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
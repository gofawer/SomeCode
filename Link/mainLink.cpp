#include <iostream>
#include <string>
using namespace std;

struct Link {
    Link(const string& v, Link* p = nullptr, Link* s = nullptr)
        : value{v}, prev {p}, succ {s}
    {
        cout << "Norse God created: " << value << endl;
    }

    string value;
    Link* prev;
    Link* succ;
};

int main()
{
    Link* norseGods = new Link("Thor", nullptr, nullptr);
    norseGods = new Link("Odin", nullptr, norseGods);
    norseGods->succ->prev = norseGods;
    norseGods = new Link("Freia", nullptr, norseGods);
    cout << norseGods->value << endl;
    cout << norseGods->prev->value << endl;
    cout << norseGods->succ->value << endl;


    cout << "Hello World!" << endl;
    return 0;
}


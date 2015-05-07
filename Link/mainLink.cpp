#include <iostream>
#include <string>
#include <list>
using namespace std;

struct Link {
    Link(const string& v, Link* p = nullptr, Link* s = nullptr)
        : value{v}, prev {p}, succ {s}
    {
        //showValues();
    }

    void showValues() {
        if (value != "")
            cout << "Norse God created: " << value << endl;
        if (succ)
            cout << "succ: " << succ->value << endl;
        if (prev)
            cout << "prev: " << prev->value << endl;
    }

    string value;
    Link* prev;
    Link* succ;
};

void adr(const string& desc, const Link* ad) {
    cout << desc << " adr: " << ad << endl;
}

int main()
{
//    Link* linkedNumber = new Link{"1", nullptr, nullptr};
//    linkedNumber = new Link{"2", linkedNumber, nullptr};
//    linkedNumber->prev = linkedNumber;
//    linkedNumber = new Link{"3", linkedNumber, nullptr};
//    linkedNumber->prev = linkedNumber;
//    linkedNumber->prev->showValues();

    Link* norseGods = new Link{"Thor", nullptr, nullptr};
    adr("Thor", norseGods);
    Link* thorCopy = norseGods;

    norseGods = new Link{"Odin", nullptr, norseGods};
    adr("Odin", norseGods);
    Link* odinCopy = norseGods;



//    norseGods->succ->prev = norseGods;
//    norseGods = new Link{"Freia", nullptr, norseGods};
//    norseGods->succ->prev = norseGods;

//    {
//        list<string>* oneTwo = new list<string>;
//        cout << oneTwo->size() << endl;

//        oneTwo->push_back("one");
//        oneTwo->push_back("two");
//        oneTwo->push_back("three");

//        auto i = oneTwo->begin();
//        oneTwo->insert(i, "four");
//        oneTwo->push_front("zero");

//        for (auto j = oneTwo->begin(); j != oneTwo->end(); ++j) {
//            cout << "list: " << *j << endl;
//        }
//        cout << oneTwo->size() << endl;
//    }

    return 0;
}


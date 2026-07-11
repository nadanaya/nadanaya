#include <iostream>
using namespace std;

class CStack {
public:
    class node {
    public:
        int data;
        node* next;
        node(int x, node* nxt) : data(x), next(nxt) {}
    };

    CStack();
    void insert(int);
    int pop();
    void show();

protected:
    node* first;
};

CStack::CStack() {
    first = nullptr;
}

void CStack::insert(int x) {
    node* temp = new node(x, first);
    first = temp;
}

int CStack::pop() {
    if (first == nullptr) return -1;
    int retval = first->data;
    node* temp = first;
    first = first->next;
    delete temp;
    return retval;
}

void CStack::show() {
    node* temp = first;
    while (temp != nullptr) {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "END\n";
}

class CPositiveStack : public CStack {
public:
    void insert(int x) {
        if (x <= 0) return;
        CStack::insert(x);
    }
};

int main() {
    CStack s;
    CPositiveStack ps;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.show();  // Should print: 4-->3-->2-->1-->END

    ps.insert(1);
    ps.insert(2);
    ps.insert(-3); // Should not insert this
    ps.insert(4);
    ps.show();  // Should print: 4-->2-->1-->END

    return 0;
}

#include <iostream>
using namespace std;

struct rect
{
    int length = 10;
    int breadth = 20;
};

struct train {
int n = 3;
struct rect *r;


};

void create (struct train *t) {

t ->r = new rect[t->n];
for (int i = 0; i<t->n; i++) {
    cin >> t->r[i];
    cin>> t->r->breadth;
}

for (int i =0; i<t->n; i++) {
    cout << t->r->length;
}

}

int main() {

    struct train t;
    create(&t);

int a = 10;
int *s;
s = &a;
cout << a<<endl;
cout << &s<<endl;
cout << &a<<endl;
cout << *s<<endl;


return 0;



}
#include <iostream>
using namespace std;
#include <stdio.h>

struct element {
int i;  // row number of element
int j;  // column number of element
int x;  // element itself

};

struct sparse {
int m;   // total no. of rows
int n;   // total no. of columns
int num; // total no. of non-zero elements
struct element *e; // pointer for creating dynamic array of type element
};

void create (struct sparse *s) {

cout <<"Enter dimensions"<<endl;
cin >> s->m >> s->n;
cout<<"Enter no. of non zero elements"<<endl;
cin >> s->num;
s->e = new element[s->num]; // dynamic array of type element and size = s->num
cout<<"Enter all non-zero elements"<<endl;
for (int i =0; i< s->num; i++) {
    cin >> &s->e[i].i >> &s->e[i].j >> &s->e[i].x;

}

}
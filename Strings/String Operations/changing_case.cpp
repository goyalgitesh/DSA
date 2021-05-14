#include <iostream>
using namespace std;

int length(char str[]) {
    int i;
    for (i=0 ; str[i] != '\0'; i++) {

    }
    return i;
} 

char* change_case(char str[],int len) {
    // a - A = 32;  b- B = 32; .......... z- Z = 32;
    // 97-65 = 32;   98-66 = 32;..........122-90 = 32;
    // All characters stored as ASCII values in the memory so we operate int operations on them;  
    
    for (int i=0; i<len; i++) {
    if (str[i] >= 65 && str[i] <=90) 
        str[i] = str[i] + 32;
    else
    str[i] = str[i] - 32;

}

return str;

}

int main() {

    char s[] = "giteshgoyal";
    int l = length(s);

cout<<change_case(s,l)<<endl;


    return 0;


  
}
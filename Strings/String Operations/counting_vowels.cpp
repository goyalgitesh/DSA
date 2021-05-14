#include <iostream>
using namespace std;

int main() {
    char s[] = "WelcomeToAtlanticOcean";
    int count = 0;
    int i;

    for (i=0; s[i]!='\0'; i++) {

        if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {

            count++;

}
}
cout <<"Total vowels are: "<<count<<endl;
cout<<"Total consonants are: "<<i-count<<endl;

return 0;

}
#include<iostream>
using namespace std;

int main()
{
    char vowel;

    cout<<endl<<"Enter the Alphabet to be checked (in smallcase): ";
    cin>>vowel;
    
    switch(vowel)
    {
        case 'a':
            cout<<endl<<"It is a vowel";
            break;
        case 'e':
            cout<<endl<<"It is a vowel";
            break;
        case 'i':
            cout<<endl<<"It is a vowel";
            break;
        case 'o':
            cout<<endl<<"It is a vowel";
            break;
        case 'u':
            cout<<endl<<"It is a vowel";
            break;
        default:
        cout<<endl<<"It is a consonant";
    }

    return 0;
}
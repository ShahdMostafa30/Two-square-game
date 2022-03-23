/*program : Baconian Cipher (cipher 4)
 * purpose : encrypt and decrypt the user's message by convert each char to five characters like aaaaa or aaaab etc..
 * Author Name : Shahd Mostafa Mahmoud
 * ID : 20211054  */
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
void cipher();
void decipher();
int main() {
    int enter;
    cout << "ahlan ya user ya hebiby \n what do you want to do?\ncipher a message enter 1\ndecipher a message enter 2\nEnd enter 3\n";
    cin >> enter;
    if (enter == 1)
        cipher();
    else if (enter == 2)
        decipher();
    else if (enter == 3)
        cout << "Exit";
}


void cipher ()
{   string message;
    map<char , string> alphabet_dictionary = {{'A',"aaaaa"}, {'B',"aaaab"}, {'C',"aaaba"},
                                              {'D',"aaabb"}, {'E',"aabaa"},{'F',"aabab"},{'G',"aabba"}, {'H',"aabbb"},
                                              {'I',"abaaa"},{'J',"abaab"},{'K',"ababa"}, {'L',"ababb"},{'M',"abbaa"},{'N',"abbab"},
                                              {'O',"abbba"},{'P',"abbbb"}, {'Q',"baaaa"}, {'R',"baaab"},{'S',"baaba"}, {'T',"baabb"},
                                              {'U',"babaa"},{'V',"babab"}, {'W',"babba"}, {'X',"babbb"},{'Y',"bbaaa"}, {'Z',"bbaab"}};

    cout << "Enter your message";
    cin.ignore();
    getline(cin,message);
    for(int i = 0; i < message.size(); i++) {
        message.at(i)=toupper(message.at(i));
    }
    for (int i= 0 ;i <= message.size();i++) {
        message[i];
        if (int(message[i]) != 32)
            cout << alphabet_dictionary[message[i]];
        else if (int(message[i]) == 32)
            cout << " ";
    }
}


void decipher()
{   string x ="";
    map<string,char> alphabet_dictionary = {{"aaaaa",'A'}, {"aaaab",'B'}, {"aaaba",'C'},
                                            {"aaabb",'D'}, {"aabaa",'E'},{"aabab",'F'},{"aabba",'G'}, {"aabbb",'H'},
                                            {"abaaa",'I'},{"abaab",'J'},{"ababa",'K'}, {"ababb",'L'},{"abbaa",'M'},
                                            {"abbab",'N'}, {"abbba",'O'},{"abbbb",'P'}, {"baaaa",'Q'}, {"baaab",'R'},
                                            {"baaba",'S'}, {"baabb",'T'},{"babaa",'U'},{"babab",'V'}, {"babba",'W'},
                                            {"babbb",'X'},{"bbaaa",'Y'}, {"bbaab",'Z'}};
    string message ;
    cout << "Enter your message";
    cin.ignore();
    getline(cin,message);
    for (char i = 0 ; i <= message.length() ;i++)
    {
        message[i];
        if (int(message[i]) != 32)
        {
            x += message[i];
            if (x.length()==5)
            {
                cout <<alphabet_dictionary[x];
                x = "";
            }

        }
        else
        {
            cout << " ";
            x = "";
        }
    }
}
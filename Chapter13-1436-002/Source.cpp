#include <iostream>

using namespace std;


int main() {
   

    string s1 = "01234";
    string s2 = "alphabetical";
    //cout << s1.append(" green eggs and ham") << endl; 

    //for (int i = 0; i < s1.length(); i++)
    //{
    //    cout << (char)toupper(s1[i]) << endl; 
    //}
    //string s2 = "beta";

    //string s3 = s1+s2;  //alphaalpha
    //cout << s3 << endl; 

    //[]() {}
    //[] -> index operator/ subscript operator 

    //cout << s1[-2] << endl;

    //int a = 1 + 2; 
    
    cout << "FIRST occurrence of a is at index: " << s2.find('a') << endl;

    int secondAPosition = s2.find('a', 1);
    cout << "Second is at: " << secondAPosition << endl;

    int thirdAPosition = s2.find('a', secondAPosition + 1);

    cout << "Third (and final) a is at index: " << thirdAPosition << endl;
    

    return 0;
}

//Q1//
#include<iostream>
#include <fstream>
using namespace std;
int main(){
   ofstream numFile("NUM.txt");
   ofstream evenFile("EVEN.txt");
   ofstream oddFile("ODD.txt");

    for(int i=1; i<=200; i++){
        numFile << i << " ";
        switch(i%2){
            case 0:
            evenFile << i << " ";
            break;
        case 1:
        oddFile << i<< " ";
        break;
    }
}
    numFile.close();
    evenFile.close();
    oddFile.close();
    cout << "numbers printed successfully";
    return 0;
}

//Q2//
//Q2//
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream file("NOTES.txt");
    char ch;
    int count = 0;

    while(file.get(ch)) {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            count++;
    }

    cout << "Alphabets = " << count;

    file.close();
    return 0;
}


//Q3//
//Q3//
#include<iostream>
#include<fstream>
using namespace std;

class Student {
public:
    int id;
    char name[20];
};

int main() {
    Student s;

    cout << "Enter id and name: ";
    cin >> s.id >> s.name;

    ofstream file("data.dat", ios::binary);
    file.write((char*)&s, sizeof(s));
    file.close();

    cout << "Data written";

    return 0;
}



//Q4//
//Q4//
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream f1("input.txt");
    ofstream f2("output.txt");

    char ch;

    while(f1.get(ch)) {
        f2.put(ch);
    }

    cout << "File copied";

    f1.close();
    f2.close();

    return 0;
}


//Q5//
//Q5//
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    cout << "Length = " << str.length() << endl;

    ofstream file("text.txt");
    file << str;
    file.close();

    ifstream file2("text.txt");
    string read;

    getline(file2, read);
    cout << "From file: " << read;

    file2.close();
    return 0;
}



//Q6//(A)part
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream f("file.txt");
    f << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    f.close();

    ifstream f2("file.txt");

    f2.seekg(9);   // 10th character
    char ch;
    f2.get(ch);

    cout << "10th char = " << ch;

    f2.close();
    return 0;
}



//Q6//(B)part
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream f("file.txt", ios::in | ios::out);

    f.seekp(4);   // 5th position
    f.put('X');

    cout << "Updated";

    f.close();
    return 0;
}



//Q6//(C)part
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream f("file.txt");

    f.seekg(0, ios::end);
    cout << "Size = " << f.tellg();

    f.close();
    return 0;
}




//Q6//(D)part
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream f("file.txt");

    f.seekg(-1, ios::end);

    char ch;
    f.get(ch);

    cout << "Last char = " << ch;

    f.close();
    return 0;
}



//Q6//(E)part
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream f("data.txt");

    f.seekg(10);

    cout << "Position = " << f.tellg() << endl;

    char ch;
    while(f.get(ch)) {
        cout << ch;
    }

    f.close();
    return 0;
}



//Q6//(F)part
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream f("hello.txt", ios::out | ios::in);

    string str = "HelloWorld";

    for(int i = 0; i < str.length(); i++) {
        f.put(str[i]);
        cout << "Pos: " << f.tellp() << endl;
    }

    // replace "World" with "C++"
    f.seekp(5);
    f << "C++";

    f.close();
    return 0;
}

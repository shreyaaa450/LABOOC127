#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    
    string line;

    fout.open("sample.txt");



while (fout) { 

getline(cin, line); 

if (line == "-1") 

break; 

fout << line << endl; 
} 

fout.close();

ifstream fin;
    fin.open("sample.txt");

    
    fout.open("sample1.txt");

    while(getline(fin,line)){

     fout<<line<<endl;
    } 

    fout.close();
    fin.close();


}
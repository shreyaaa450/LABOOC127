#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
ifstream file("data.txt");

int lines = 0, words = 0, characters = 0;

string line;

if(!file){
    cout<<"file not found.."<<endl;
}

while(getline(file,line)){
    lines++;
    characters +=line.length();
} 

for(int i = 0;i< line.length();i++){
    if(line[i] == ' '){
        words++;
    }
    }
    
    if(!line.empty()){
        words++;
    }

    cout<<"Lines :"<<lines<<endl;
    cout<<"Words :"<<words<<endl;
    cout<<"Characters :"<<characters<<endl;

    file.close();
    return 0;
  

}
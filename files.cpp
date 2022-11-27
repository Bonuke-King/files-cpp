
//the fstream library allows us to work with files

//to use the fstream library , include both the standard <iostream> and the <fstream> header file

#include <iostream>
#include <fstream> //a combination of ofstream and ifstream :creates reads and writes to the files
using namespace std;

int main ()
{
    //create and opent a text file
    ofstream MyFile ("filename.txt");

    //write to the file
    MyFile << "Files can be tricky, but it is fun enough!"<<endl<<endl;

    //close the file
    MyFile.close();//it is considered a good practice and it can clean up unnecessary memory space


//create a text string which is used to output the text file 
string myText;

//read from the text file
ifstream MyReadFile ("filename.txt");

//use a while loop together with the getline() function to read the file line by line

while (getline (MyReadFile,myText))
{
    //output the text from the file
    cout << myText;
}
//clode the file
MyReadFile.close();


    return 0;

}





























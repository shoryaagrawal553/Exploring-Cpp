#include <iostream> 
#include <fstream>
using namespace std;   
   
int main()
{ 
    //cout << "to write in a file";
 
    ofstream outFile("sample_file.txt");
    // OR ofstream out ("sample_file.txt");

    outFile << "this is a sample file \nThis is the second line of the file";

    outFile.close();

    cout<<"to read from the file \n";

    ifstream inFile("sample_file.txt");
    string data;;
    while (getline(inFile, data))
    {
        cout<<data<<endl;
    }

    return 0;
}






#include <iostream>

using namespace std;
int main() {

    cout<<"Creating random input";

    int x;
    cout<<"Make sure that your input file is at inputs and output file is at outputs directories"<<endl;
    cout<<"mac(0) or windows(1)";
    cin >> x;
    cout<< "Input file name:(Please add .txt to end)";
    string iname;
    string oname;
    cin >> iname;

    cout<< "Output file name:(Please add .txt to end)";
    cin >> oname;

    if(x==0) {
        string total="./cmpe250-assignment3 ../inputs/" + iname+ " ../outputs/" + oname;
        system(total.c_str());
    }else{
        string total="cmpe250-assignment3.exe ../inputs/" + iname+ " ../outputs/" + oname;
        system(total.c_str());
    }
}
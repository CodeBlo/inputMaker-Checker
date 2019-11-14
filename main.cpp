#include <iostream>
#include <fstream>
#include <random>
using namespace std;
int main() {



    int os,random;
    cout<<"Make sure that your input file is at inputs and output file is at outputs directories"<<endl;
    cout<<"mac(0) or windows(1)";
    cin >> os;
    cout<< "Random(0) or not(1)";
    cin>> random;
    cout<< "Input file name:(Please add .txt to end)";
    string iname;
    string oname;
    cin >> iname;

    if(random==0) {
        string outfile="../inputs/"+iname;
        ofstream outFile(outfile);
        random_device rd;
        mt19937 gen(rd());

        int N = gen() % 1001;
        int M = gen() % 1001;
        int Q = gen() % (N + M + 1);
        cout << "Creating random input..." << endl;
        outFile << N << " " << M << " " << Q << endl;
        for (int i = 0; i < Q; i++) {
            outFile << gen() % 3 + 1 << " " << (gen() % 2 == 0 ? "A" : "B") << gen() % 100001 << endl;
        }
        cout << "Random input created." << endl;
    }
    cout<< "Output file name:(Please add .txt to end)";
    cin >> oname;

    if(os==0) {
        string total="../Executable/cmpe250-assignment3 ../inputs/" + iname+ " ../outputs/" + oname;
        system(total.c_str());
    }else{
        string total="../Executable/cmpe250-assignment3.exe ../inputs/" + iname+ " ../outputs/" + oname;
        system(total.c_str());
    }
}
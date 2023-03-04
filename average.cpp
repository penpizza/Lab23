#include<iostream>
using namespace std;

int main (int argc,char *argv[]){
    int a,sum=0;
    if(argc ==1){
        cout << "Please input numbers to find average.";
    }else {
        cout << "---------------------------------\n";
        for(int i=0; i<argc; i++){
            a = atoi(argv[i]);
            sum +=a;
        }
        cout << "Average of "<<argc-1<<" numbers = "<< sum/(argc-1)<<endl;
        cout << "---------------------------------\n";
    }
}

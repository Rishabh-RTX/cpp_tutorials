# include<iostream>

using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo=9;
    glo=78;
    bool is_true = false;
    sum();
    cout<<'\n'<<glo<<'\n'<< is_true;
    // int a =6;
    // int b =9;
    // int a =6, b=9;
    // float g=9.8;
    // char u ='m';
    // cout<<"This is Tutorial 4.\nHere the value of a is "<<a<<".\nthe value of b is "<<b<<".\nThe value of g is "<<g;
    // cout<<"\nThe value of u is "<<u;


    return 0;
}
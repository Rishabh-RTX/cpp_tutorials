# include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"ENTER THE VALUE OF FORCE:\n";/*'<<' is called Insertion operator*/
    cin>>num1; /* '<<' is called Extraction operator */

    cout<<"ENTER THE VALUE OF DISPLACEMENT:\n";/*'<<' is called Insertion operator*/
    cin>>num2; /* '<<' is called Extracton operator */

    cout<<"THE WORK DONE IS "<<num1 * num2;

    return 0;
}
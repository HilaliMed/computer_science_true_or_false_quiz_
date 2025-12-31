#include<iostream>
#include<string>
#include<algorithm>
#include<list>
#include<vector>
#include<random>
#include<chrono>



using namespace std ;


void questions(int n){


    if (n==1){
        cout<<"Linux, Microsoft Windows, and Internet Explorer are operating system.  "<<endl;


    }
    if (n==2){
        cout<<"In C++, 0 and false are completely interchangeable in all contexts.   "<<endl;
    }
    if (n==3){
        cout<<"Everything in Linux is represented as a file or a file descriptor.   "<<endl;
    }
    if (n == 4){
        cout<<"Python lists can only contain elements of the same data type.   "<<endl;
    }
    if (n == 5){
        cout<<"In Python, = and == operators are interchangeable for comparison.   "<<endl;
    }
    if (n == 6){
        cout<<"Python is a compiled language.   "<<endl;
    }
    if (n == 7){
        cout<<"Python supports multiple inheritance.   "<<endl;
    }
    if (n == 8){
        cout<<"In C++, std::string is part of the Standard Library, not a built-in type.   "<<endl;
    }
    if (n == 9){
        cout<<"C++ supports only single inheritance for classes.   "<<endl;
    }
    if (n == 10){
        cout<<"std::cin reads input including whitespace by default.   "<<endl;
    }
    if (n == 11){
        cout<<"++i and i++ always have identical performance for integers.   "<<endl;
    }
    if (n == 12){
        cout<<"Python 2 and Python 3 are not backward compatible.   "<<endl;
    }
    if (n == 13){
        cout<<"Two's complement representation allows using the same circuit for addition and subtraction.   "<<endl;
    }
    if (n == 14){
        cout<<"Code reviews help catch bugs before they reach production.   "<<endl;
    }
}



void answers(int n, int b){

    int s = 0;
    if (n==1 && b ==0  ){
        cout<<"Correct"<<endl;
    }
    else if (n==2 && b ==0 ){
        cout<<"Correct"   <<endl;
    }
    else if (n==3 && b ==1 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 4 && b ==0 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 5 && b ==0 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 6  && b ==0 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 7  && b ==1 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 8 && b ==1 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 9 && b ==0 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 10 && b ==0 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 11 && b ==0 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 12 && b ==1 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 13 && b ==1 ){
        cout<<"Correct   "<<endl;
    }
    else if (n == 14 && b ==1 ){
        cout<<"Correct   "<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }
}




int main(){
    std::mt19937 g(std::chrono::steady_clock::now().time_since_epoch().count());

    vector<int> numbers={1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    int i =1;

    int d=9;

    cout<<"    Quick revision quiz for computer science"<<endl<<endl;

    cout<<"Answer the following 8 questions with:"<<endl;

    cout<<"1 :true "<<" 0 :false"<<endl<<endl;

    while(i != 9){

        shuffle(numbers.begin(),numbers.end(),g);

        int num=numbers[0];

        numbers.erase(numbers.begin());

        cout<<i<<"-";

        questions(num);


        do{
            cin>>d;


            if (d!=1 && d!=0){

                cout<<"Error occurred, input provided invalid."<<endl<<endl;

            }
            else{

                answers(num,d);

                cout<<endl;
            };

        }while(d !=1 && d !=0);

        i++;


    }


}

































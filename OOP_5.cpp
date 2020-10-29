#include <iostream>

using namespace std;

class Human{

    private:
        int age;

    public:
        void displayage(){
            cout<<age<<endl;
        }
        void setage(int value){
            age = value;
        }
};

int main()
{
    Human anil;
    
    anil.setage(24);
    anil.displayage();
    return 0;
}
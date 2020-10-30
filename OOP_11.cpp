/*#include <iostream>

using namespace std;

void display(){
    static int counter = 0;
    cout<<"Display function called "<<++counter<<" times"<<endl;
}

int main(){

    display();
    display();
    display();
    display();
    return 0;

}
*/

#include <iostream>

using namespace std;

class Human{
    public:
        static int human_count;
    Human(){
        human_count++;
    }
    void humanTotal(){
        cout <<"There are "<<human_count<<" peoples are inn this program"<<endl;
    }
};

int Human::human_count = 0;

int main(){
    cout<<Human::human_count;
    Human anil;
    anil.humanTotal();
    cout<<Human::human_count<<endl;
    Human anjali;
    Human aman;
    Human anja;
    cout<<Human::human_count<<endl;

    return 0;
}
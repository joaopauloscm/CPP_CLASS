# include <iostream>
# include <string>

/*
int add_numbers (int first_pam, int second_pam){
    int result = first_pam * second_pam;
    return result;
}

int main (){
    std :: cout << "The result of your multiplication is: "<< add_numbers(10,5)<< std::endl;


}
*/

int age1;
std:: string name; 


int main() {
    std :: cout << "Please type your name and age" << std::endl;
    std :: getline(std::cin,name);
    std :: cin >> age1;
    std :: cout << "Hey your name is: " << name <<" your age is: "<< age1 << std::endl;
}


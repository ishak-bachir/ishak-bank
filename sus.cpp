 #include <iostream>
double balance = 0.00;
void welcome(){
    std::cout<<"********************"<<std::endl;
    std::cout<<"Welcome to Ishak bank"<<std::endl;
    std::cout<<"********************"<<std::endl;
    std::cout<<"choose:"<<std::endl;
    std::cout<<"1/Show balance"<<std::endl;
    std::cout<<"2/Deposit money"<<std::endl;
    std::cout<<"3/Withdraw money"<<std::endl;
    std::cout<<"4/Exit"<<std::endl;
}
void showBalance(){
    std::cout<<"Your balance is : "<< balance <<"$" <<std::endl;
}
void depositMoney(){
    int depositMoneyAmount;
    std::cout<<"Enter the deposit money amount \n";
    std::cin>>depositMoneyAmount;
    if(depositMoneyAmount > 0){
        balance += depositMoneyAmount;
    }
}
void withdrawMoney(){
    int withdrawMoneyAmount;
    std::cout<<"Enter the withdraw money amount \n";
    std::cin>>withdrawMoneyAmount;
    if(withdrawMoneyAmount > balance){
        std::cout<<"Your balance isn't enough \n";
    }
    else{
        balance -= withdrawMoneyAmount;
    }
}
int main(){
    char choice;
    do {
        welcome();
        std::cin >> choice;

        switch (choice) {
            case '1':
                showBalance();
                break;
            case '2':
                depositMoney();
                showBalance();
                break;
            case '3':
                withdrawMoney();
                showBalance();
                break;
            case '4':
                std::cout << "Thank you for using Ishak bank. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please choose a valid option." << std::endl;
        }
        std::cout << std::endl;
    } while (choice != '4');
    return 0;
}

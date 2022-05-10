#include <iostream>
#include <fstream>

using namespace std;


struct About
{
    string name;
    int CardNum;
    int ifc_code;
};

double deposit(double current_balance , double amout_deposit)
{
    return current_balance+amout_deposit;
}
double withdraw(double current_balance, double amount_withdraw)
{
    return current_balance - amount_withdraw;
}
double transaction(double current_balance, double amount_to_transfer, double receving_account_num)
{
    double new_balance =  current_balance - amount_to_transfer;
    return new_balance;

}
double loan(double loan_limit, double loan_amount)
{
    if(loan_limit < loan_amount)
    {
        return 1;
    }
    else
    {
        return loan_limit - loan_amount;
    }
}



int main()
{
    double x; 
    
    
    
    
    double depositing, withdrawing, transfering, loaning,receving;
    double current_bal;
    int i = 6;
    struct About user;
    int choose;
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"____________________________________WELCOME____________USER___________________________________________\n";
    cout<<"\n";
    cout<<"ACCOUNT HOLDER NAME :";
    cin>>user.name;
    cout<<"\n";
    cout<<"ACCOUNT CARD NUMBER :";
    cin>>user.CardNum;
    cout<<"\n";
    cout<<"ACCOUNT IFC CODE :";
    cin>>user.ifc_code;
    if(user.CardNum == 6866)
    {
        current_bal = 130000.00;
        cout<<"BALANCE :"<<current_bal;
    }
    else{
        current_bal = 200000.00;
        cout<<"BALANCE :"<<current_bal;
    }

    cout<<"\n";    
    cout<<"CHOOSE OPTION \t 1 : DEPOSIT \t 2: WITHDRAW \t 3: LOAN \t 4: TRANSFER \t 5: EXIT\n";
    cin>>choose;
    cout<<"\n";
    if(choose == 1)
    {
        cout<<"ENTER AMOUNT TO DEPOSIT :";
                cin>>depositing;
                cout<<"NEW BALANCE :"<<deposit(current_bal,depositing)<<"\n";
                cout<<"DEPOSITED :"<<depositing<<"\n";
                x = deposit(current_bal,depositing);
                ofstream deposit_receipt("receipt_for_deposit.txt");
                deposit_receipt<<"NAME :"<<user.name<<"\n"<<"Balance :"<<x<<"\n"<<"DEPOSITED AMOUNT :"<<depositing;
                deposit_receipt.close();
    }
    else if(choose == 2)
    {
        cout<<"ENTER AMOUNT TO WITH DRAW :";
                cin>>withdrawing;
                cout<<"NEW BALANCE :"<<withdraw(current_bal,withdrawing)<<"\n";
                cout<<"WITHDRAWN :"<<withdrawing<<"\n";
                x = withdraw(current_bal,withdrawing);
                ofstream withdraw_receipt("receipt_for_withdraw.txt");
                withdraw_receipt<<"NAME :"<<user.name<<"\n"<<"Balance :"<<x<<"\n"<<"Withdrawed AMOUNT :"<<withdrawing;
                withdraw_receipt.close();
    }
    else if(choose == 3)
    {
        cout<<"ENTER AN AMOUNT FOR LOAN :";
                cin>>loaning;
                cout<<"NEW BALANCE :"<<loan(current_bal/10, loaning)<<"\n";
                cout<<"LOAN :"<<loaning<<"\n";
                x = loan(current_bal/10, loaning);
                ofstream loan_receipt("receipt_for_loan.txt");
                loan_receipt<<"NAME :"<<user.name<<"\n"<<"Balance :"<<x<<"\n"<<"loan AMOUNT :"<<loaning;
                loan_receipt.close();
    }
    else if(choose == 4)
    {
        cout<<"ENTER AMOUNT FOR TRANSFER :";
                cin>>transfering;
                cout<<"RECEVING ACCOUNT NUMBER :";
                cin>>receving;
                cout<<"NEW BALANCE :"<<transaction(current_bal,transfering,receving)<<"\n";
                ofstream transaction_receipts("receipt_for_transfering.txt");
                x = transaction(current_bal,transfering,receving);
                transaction_receipts<<"NAME :"<< user.name<<"\nBalance :"<<x<<"\n"<<"To RECEIVING :"<<receving;
                transaction_receipts.close();
    }
    else{
        cout<<"BIE"<<system("exit");
    }
    return 0;

}
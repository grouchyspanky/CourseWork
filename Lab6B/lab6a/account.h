// who: <your name and Mt SAC username goes here> Jesus Ojeda A02997653
// what: <the function of this program> use inheritance to represent customers bank acounts 
// why: <the name of the lab>
// when: <the due date of this lab.>

#ifndef ACCOUNT_H
#define ACCOUNT_H

/** The base class for all accounts types*/
class Account {
public:
   /** constructor initializes balance
       @parameter: initialBalance The initial balance of the account. Must be a non-negative value
       @throws invalid_argument exception if initialBalance is out of range */
   explicit Account(double);
   
   /** Add an amount to the account balance
       @parameter: amount Amount that gets added to the account */
   virtual void credit(double); 

   /** Subtract an amount from the balance
       @parameter: amount The amount to be subtracted from the account 
       @return: ture if the deduction was succesfull or false otherwise
       @throws out_of_range exception If the amount is greater than the current balance */
   virtual bool debit(double);

   /** Return the account balance
       @return: the current account balance */
   double getBalance();

private:
   double balance; // data member that stores the balance
}; 

#endif

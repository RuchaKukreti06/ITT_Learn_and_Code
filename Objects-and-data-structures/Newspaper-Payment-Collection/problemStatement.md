Focus: Practical application of the Law of Demeter and understanding the architectural
difference between Objects (behavior exposure) and Data Structures (data exposure).
Assignment: Refactoring "Train Wrecks" (Law of Demeter)
Context: The code below represents a payment system for a delivery service. Currently, the
Paperboy class violates the Law of Demeter by navigating through the Customer object to
access the Wallet internals. This exposes the implementation details of the Customer.

public class Paperboy {
public void collectPayment(Customer customer, double paymentAmount) {
Wallet wallet = customer.getWallet();
if (wallet.getTotalMoney() >= paymentAmount) {
wallet.subtractMoney(paymentAmount);
} else {
// come back later
}
}
}
public class Customer {
private String firstName;
private String lastName;
private Wallet myWallet;
public String getFirstName(){ return firstName; }
public String getLastName(){ return lastName; }
public Wallet getWallet(){ return myWallet; }
}
public class Wallet {
private float value;
public float getTotalMoney() { return value; }
public void setTotalMoney(float newValue) { value = newValue; }
public void subtractMoney(float debit) { value -= debit; }
}
Task:
1. Refactor the code above so that Paperboy does not access Wallet directly.
2. Implement the principle of "Tell, Don't Ask." The Paperboy should just ask the Customer
to pay.
3. Ensure the Customer class controls its own internals.
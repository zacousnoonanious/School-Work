/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bankaccount;

/**
 *
 * @author Z
 */
public class BankAccount {

    public double amount;
    public double rate;
    public void showNewBalance();
    {
        double newAmount = amount + (rate / 100.0) * amount;
        System.out.println("With interest added, the new amount is $" + newAmount);
    }

    
    
}

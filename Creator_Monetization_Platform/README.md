OOP Concepts Assignment – Refactoring & 
Design  
Problem Statement  
You are building the backend logic for a Creator Monetization Platform (similar to Instagram, 
YouTube, or LinkedIn). 
Creators earn money through multiple dynamic sources like: 
• Brand deals 
• Ad revenue 
• Subscriptions 
• Live gifts 
The system has evolved quickly and now suffers from inconsistent logic, duplication, and poor 
extensibility. 
Your task is to refactor and redesign the system using OOP & SOLID principles so that it 
can scale with new monetization models. 
Your tasks 
1. Identify design issues 
a. Public mutable fields & if-else explosion 
b. Single earning type limitation 
c. No extensibility 
d. Violates OCP 
2. Redesign the System 
a. Allow multiple earning strategies per creator 
b. Support easy addition of new earning types 
c. Avoid use of if-else 
d. Encapsulate all data properly 
e. Separate earning logic from Creator Entity 
3. Introduce Proper OOP Design: Abstraction, Composition over Inheritance & 
Strategy patter(optional) 
4. Handle real-world complexity by supporting cases like: 
a. A creator earns from ads + subscription + brand deals 
b. Some earnings depend on: engagement rate, region & season. 
 
using System; 
 
public class Creator 
{ 
    public string name; 
    public string earningType; 
    public double baseAmount; 
    public int views; 
    public int subscribers; 
 
    public double CalculateEarnings() 
    { 
        if (earningType == "ADS") 
        { 
            return views * 0.05; 
        } 
        else if (earningType == "SUBSCRIPTION") 
        { 
            return subscribers * 2; 
        } 
        else if (earningType == "BRAND") 
        { 
            return baseAmount; 
        } 
        return 0; 
    } 
} 
 
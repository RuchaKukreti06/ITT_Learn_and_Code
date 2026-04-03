OOP Concepts Assignment 
Problem Statement: This assignment focuses on understanding and applying core Object-Oriented 
Programming (OOP) principles. You are provided with a Vehicle Management System codebase that 
violates multiple OOP principles and coding standards. Your task is to refactor the codebase to align 
with industry best practices. 
Key Focus Areas: 
1. Identify and fix violations related to Encapsulation, Inheritance, Polymorphism, and 
Abstraction. 
2. Ensure the refactored codebase follows proper coding standards and best practices. 
 
using System; 
using System.Collections.Generic; 
 
namespace OOPsAssignments 
{ 
    public class Car 
    { 
        // This is the make of the car 
        public string make; 
        // This is the model of the car 
        public string Model; 
        // Year variable stores the year 
        public int year_of_manufacture; 
        public double Price; 
        public double fuel_level; 
        public bool is_running; 
 
        // Sets the price 
        public void set_price(double price) { 
        // TODO: Add validation - prices should never be negative or 
exceed $1M 
            Price = price; 
        } 
 
        // Vehicle cannot start with empty fuel tank for safety reasons 
        public void start_engine() 
        { 
            if (fuel_level > 0) 
            { 
                is_running = true; 
                Console.WriteLine($"{make} {Model} started."); 
            } 
            else 
            { 
                Console.WriteLine("Cannot start - no fuel!"); 
            } 
        } 
 
        public void Stop() 
        { 
            IsRunning = false; 
            Console.WriteLine($"{Make} {Model} stopped."); 
        } 
 
        public void Refuel(double amount) 
        {fuel_level += amount; 
            Console.WriteLine($"Refueled. Fuel level: {fuel_level}%"); 
        } 
 
        public void show_info() 
        { 
            Console.WriteLine($"Car: {year_of_manufacture} {make} 
{Model}, Price: ${Price}"); 
        } 
    } 
 
    public class Motorcycle 
    { 
        public string Make; 
        public string model_name; 
        public int Yr; 
        public double price_amt; 
        public double FuelLevel; 
        public bool isRunning; 
        public bool has_sidecar; 
 
        // This method validates and sets the price 
        public void setprice(double p) 
        { 
          price_amt = p; 
        } 
 
        public void Start() 
        { 
            if (FuelLevel > 0) 
            { 
              isRunning = true; 
              Console.WriteLine($"{Make} {Model} started."); 
            } 
            else 
            { 
              Console.WriteLine("Cannot start - no fuel!"); 
            } 
        } 
 
        public void Stop() 
        { 
            IsRunning = false; 
            Console.WriteLine($"{Make} {Model} stopped."); 
        } 
 
        public void Refuel(double amount) 
        { 
  FuelLevel += amount; 
  Console.WriteLine($"Refueled. Fuel level: {FuelLevel}%"); 
        } 
 
        public void DisplayInfo() 
        { 
            Console.WriteLine($"Motorcycle: {Yr} {Make} {model_name}, 
Sidecar: {has_sidecar}, Price: ${price_amt}"); 
        } 
    } 
 
    // Electric vehicles use battery instead of fuel but share most 
vehicle characteristics 
    public class ElectricCar 
    { 
        public string MAKE; 
        public string Model; 
        public int Year; 
        public double price_value; 
        // Battery level in percentage (0-100) 
        public double batteryLvl; 
        public bool b_running; 
 
        public void set_Price(double price) 
        { 
            price_value = price; 
        } 
 
        public void Start() { 
            if (batteryLvl > 0) { 
                b_running = true; 
                Console.WriteLine($"{MAKE} {Model} electric motor 
started."); 
            } 
            else { 
                Console.WriteLine("Cannot start - battery dead!"); 
            } 
        } 
 
        public void Stop() 
        { 
            b_running = false; 
            Console.WriteLine($"{MAKE} {Model} stopped."); 
        } 
 
        // This method charges the battery 
        public void Do_Charge(double amount) 
        { 
            // Increment battery level by amount 
            batteryLvl += amount; 
            Console.WriteLine($"Charged. Battery level: {batteryLvl}%"); 
        } 
   
   
 
        public void displayinfo() 
        { 
            Console.WriteLine($"Electric Car: {Year} {MAKE} {Model}, 
Price: ${price_value}"); 
        } 
    } 
    public class VehicleManager 
    { 
        public List<Car> Cars = new List<Car>(); 
        public List<Motorcycle> Motorcycles = new List<Motorcycle>(); 
        public List<ElectricCar> ElectricCars = new List<ElectricCar>(); 
 
        // Method to add a vehicle 
        public void AddVehicle(object vehicle) 
        { 
            // Check if vehicle is a Car 
            if (vehicle is Car) 
            { 
                // Add car to Cars list 
                Cars.Add((Car)vehicle); 
                Console.WriteLine("Car added"); 
            } else if (vehicle is Motorcycle) 
            { 
                Motorcycles.Add((Motorcycle)vehicle); 
                Console.WriteLine("Motorcycle added"); 
            } else if (vehicle is ElectricCar) 
            { 
                ElectricCars.Add((ElectricCar)vehicle); 
                Console.WriteLine("Electric car added"); 
            } 
        } 
 
        public void display_all() 
        { 
            Console.WriteLine("\n=== Vehicles ==="); 
            foreach (var car in Cars) car.show_info(); 
            foreach (var moto in Motorcycles) moto.DisplayInfo(); 
            foreach (var eCar in ElectricCars) eCar.displayinfo(); 
        } 
 
        public double calc_total_value() 
        { 
            // Initialize total to 0 
            double total = 0; 
            // Loop through all cars 
            foreach (var car in Cars) total += car.Price; 
            foreach (var moto in Motorcycles) total += moto.price_amt; 
            foreach (var eCar in ElectricCars) total += 
eCar.price_value; 
            return total; 
        } 
 
        public void start_all_vehicles() 
        { 
           foreach (var car in Cars) car.Start(); 
           foreach (var moto in Motorcycles) moto.Start(); 
           foreach (var eCar in ElectricCars) eCar.Start(); 
        } 
    } 
 
    public class Program 
    { 
        public static void Main(string[] args) 
        { 
            Console.WriteLine("=== Vehicle Management Demo ===\n"); 
 
            var car = new Car 
            { 
                make = "Honda", 
                Model = "Accord", 
                year_of_manufacture = 2023, 
                Price = 28000, 
                fuel_level = 100 
            }; 
 
            var motorcycle = new Motorcycle 
            { 
                Make = "Harley-Davidson", 
                model_name = "Street 750", 
                Yr = 2022, 
                price_amt = 7500, 
                FuelLevel = 80, 
                has_sidecar = false 
            }; 
 
            var electricCar = new ElectricCar 
            { 
                MAKE = "Tesla", 
                Model = "Model 3", 
                Year = 2023, 
                price_value = 42000, 
                batteryLvl = 100 
            }; 
 
            Console.WriteLine("Testing Vehicles:"); 
            car.start_engine(); 
            car.show_info(); 
            car.STOP(); 
 
            Console.WriteLine(); 
            motorcycle.Start(); 
            motorcycle.DisplayInfo(); 
 
            Console.WriteLine(); 
            electricCar.Start(); 
            electricCar.displayinfo(); 
 
            // Create a new VehicleManager instance 
            var manager = new VehicleManager(); 
            manager.AddVehicle(car); 
            manager.AddVehicle(motorcycle); 
            manager.AddVehicle(electricCar); 
 
            manager.display_all(); 
            Console.WriteLine($"\nTotal Value: 
${manager.calc_total_value()}"); 
 
            Console.WriteLine("\nStarting all vehicles:"); 
            manager.start_all_vehicles(); 
 
            Console.WriteLine("\n=== Encapsulation Problem ==="); 
            car.Price = -1000; 
            car.fuel_level = 500; 
            Console.WriteLine($"Car price after invalid set: 
${car.Price}"); 
            Console.WriteLine($"Car fuel after invalid set: 
{car.fuel_level}%"); 
 
            Console.WriteLine("\n=== Demo Complete ==="); 
        } 
    } 
 
 
 
print("This is a budget calculator. What is your monthly income?") 
income = input() 
print("your monthly income is", income ) 

print("How much is your rent each month? ")
rent= input() 

print("How much is your utilities each month?")
utilities = input() 

print("What is your monthly grocery price?") 
groceries = input() 

print("What is your monthly transportation price?") 
transportation = input() 

expenses=float(rent)+float(utilities)+float(groceries)+float(transportation) 
print("your monthly expences are ", expenses)

savings= income*(0.3) 
print("Your monthly savings are", savings)

spendingMoney= income*(0.1) 
print("Your monthly spending money is ", spendingMoney )

Rent= income*(0.2) 
print("your monthly rent is", Rent) 


 


print("Thank you for using budget calculator!")
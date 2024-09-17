print("This is a budget calculator. What is your monthly income?") 
income = input() 
print("your monthly income is", income ) 

print("How much is your rent each month? ")
rent = input() 

print("How much is your utilities each month?")
utilities = input() 

print("What is your monthly grocery price?") 
groceries = input() 

print("What is your monthly transportation price?") 
transportation = input() 

expenses = float(rent) + float(utilities) + float(groceries) + float(transportation)
print("your monthly expences are ", expenses)

savings = income*(0.3) 
print("your savings are", savings  (" percent of your monthly income") )

spendingMoney = income*(0.1) 
print("your spending money is", spendingMoney  (" percent of your monthly income") )

Rent = income*(0.2) 
print("your rent are", rent  (" percent of your monthly income") )

Utilities = income*(0.2)
print("your utilities are", Utilities  (" percent of your monthly income") )

Groceries = income*(0.1)
print("your groceries are", Groceries  (" percent of your monthly income") )

Transportation = income*(0.1)
print("your transportation cost is", savings  (" percent of your monthly income") )


Expences = float(income) - float(expenses) 

print("your expences are", Expences ("percent of your monthly income. ") )

print("Thank you for using budget calculator!")
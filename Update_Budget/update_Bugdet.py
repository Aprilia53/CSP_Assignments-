print("This is the bugdet calculator!\n")

def percent(type):
    per = input 

    return (f"what is your monthly {per}?")

income=float(input("what is your monthly income? "))
rent=float(input("what is your monthly rent? "))
utilities=float(input("what is your monthly utilities? "))
groceries=float(input("what is your monthly groceries? "))
transportation=float(input("what is your monthly transportation? ")) 

savings = income *.2
expences = rent+utilities+groceries+transportation *.2
spending = income-expences-savings*.2 

def percent(type, amount): 
    per = amount/income *100

    return (f"Your {type} is {per}% income.")



print(f"Your monthly income is ${income:.2}\n")
print(f"Your monthly expences are ${expences:.2}\n")
print(f"Your monthly savings is ${savings:.2}\n") 
print(f"Your monthly spending is ${spending:.2}\n") 
print(percent("rent", rent)) 
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("savings", savings))
print(percent("expences", expences))    




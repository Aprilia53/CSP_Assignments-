print("This is the bugdet calculator!\n")

def answer(userInput):
    question = float(input(f"what is your monthly {userInput}?")) 

    return question 
 


income=answer("income") 
rent=answer("rent") 
utilities=answer("utilities")
groceries=answer("groceries") 
transportation=answer("transportation") 

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




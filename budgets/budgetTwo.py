print("Hello, this is your budget calculator. \n")
income=float(input("what is your monthly income: ")) 
rent=float(input("what is your monthly rent: "))
utilities=float(input("what is your monthly utilities: "))
groceries=float(input("what is your monthly groceries: "))
transportation=float(input("what is your monthly transportation: "))
savings = income *.2 
expences = rent+utilities+groceries+transportation
spending = income-expences-savings 
prent = rent/income *100
putilities = utilities/income *100
Ptransportation = transportation/income *100
psavings = savings/income *100
pexpences = expences/income *100
def percent(type, amount):
    per = amount/income *100

    print(f"your {type} is {per}% income.") 
print("This is a budget calculator")

def inputs(ty):
   
  
   variable = (int(input(f"What is your {ty} by month?")))
   return variable

 
income = inputs("income")
rent = inputs("rent")
utilities = inputs("utilities")
grocieries = inputs("grocieries")
car = inputs("transportation")
   


expenses = rent + utilities + grocieries + car
savings = income
spend = income - expenses
print("Your monthly income is", income)
print("Your expenses are", expenses)
print("Your monthly savings is", savings)
print("Your spending money is", spend)
prent = (rent/income) * 100
pgroceries = (grocieries/ income)* 100
psaving = (savings/ income) * 100
pexpenses = (expenses/ income) * 100
putilities= (utilities/ income) * 100
pcar = (car/income) * 100

def percent(type, amount):
    per = amount/income *100
    print(f"Your {type} is {per}% of your income.")

percent("rent", rent)
percent("utilities", utilities)
percent("grocieries", grocieries)
percent("transportation", car)
percent("expenses", expenses)
percent("savings", savings)




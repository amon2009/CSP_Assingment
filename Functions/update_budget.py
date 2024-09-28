print("This is a budget calculator")
income = float
rent = float
utilities = float
grocieries = float
car = float 

def inputs(ty, variable):
  
   var = (input(f"What is your {ty} by month?") &variable)
   return var

 
income = inputs("income", income)
rent = inputs("rent", rent)
utilities = inputs("utilities", utilities)
grocieries = inputs("grocieries", grocieries)
car = inputs("transportation", car)
   


expenses = rent + utilities + grocieries + car
savings = income  *.2
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




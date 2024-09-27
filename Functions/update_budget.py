print("This is a budget calculator")

def inputs(variable):
  
   var = float(input(f"Wht is your {variable} by month?"))
   return var

 
inputs(income)
   


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




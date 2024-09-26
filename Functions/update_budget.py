def inputs


print("This is a budget calculator")
income = int(input("How much do you make a mouth?"))
rent = int(input("How much do your rent cost:"))
utilities = int(input(" How much does your utilities cost:"))
grocieries = int(input("How much do your grocieries cost:"))
car = int(input("How much does your transportation cost: "))
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
print("Your rent is", prent,"% of your income." )
print("Your utilitites is ", putilities,"% of your income")
print("Your groceries is", pgroceries,"% of your income" )
print("Your transport is", pcar,"% of your income")
print("Your expenses is", pexpenses,"% of your income")
print("Your savings is,", psaving," % of your income")

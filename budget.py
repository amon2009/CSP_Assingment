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
prent = (utilities/income)%100
print(prent)
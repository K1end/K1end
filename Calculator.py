co = input( "Co vybereš?(+, -, /, *): " )

a = float(input( "Napiš první čislo: " ))
b = float(input( "Napiš druhý čislo: " ))

if co == "+":
    c = a + b
    print("Vysledek " + str(c))

elif co == "-":
    c = a - b
    print("Vysledek " + str(c))

elif co == "/":
    if b == 0:
        print("Dělit nulou nelze!")
    c = a / b
    print("Vysledek " + str(c))


elif co == "*":
    c = a * b
    print("Vysledek " + str(c))

else:
    print("Error!")






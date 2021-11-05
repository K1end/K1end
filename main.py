a = float(input("napiš první číslo:"))
b = float(input("napiš druhý číslo:"))
c = float(input("napiš třetí číslo:"))
print(str(a)+"x^2"+"+"+str(b) + "x" +"+"+str(c)+"=0")
D = (b**2 - 4*a*c)**0.5
x1= -b + D/2*a
x2= -b - D/2*a
if D == 0:
    print("Rovnice nemá řešeni")
elif D < 0:
    print("Rovnice nemá řešeni")
else:
    print("x1 je" , x1)
    print("x2 je" , x2)
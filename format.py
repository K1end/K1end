a = 10
b = 7
print("a je d",str(a) + " b je d",str(b))
a , b = b , a
print("a je d",str(a) + " b je d" ,str(b))
print(a, type (a))
print(b, type (b))
promena1 = "{}{}."
promena2 = "Ahoj"
promena3 = "Karle"
print(promena1.format(promena2, promena3))
print(f"{promena2} {promena3}.")
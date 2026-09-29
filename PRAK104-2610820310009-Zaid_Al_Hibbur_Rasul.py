a = 400000
b = 350000
diskonA = 13
diskonB = 21

print(f"Harga sepatu A adalah {a}\n")
print(f"Harga sepatu B adalah {b}\n")
print(f"Sepatu A mendapat diskon {diskonA}% sehingga harganya menjadi {a * (1 - diskonA / 100):.0f}\n")
print(f"Sepatu B mendapat diskon {diskonB}% sehingga harganya menjadi {b * (1 - diskonB / 100):.0f}")   
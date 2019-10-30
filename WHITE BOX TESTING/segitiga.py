a= round(float(input("Masukkan a: ")))
b= round(float(input("Masukkan b: ")))
c= round(float(input("Masukkan c: ")))

def segitiga(a,b,c):

    if (a >= b) and (a >= c): 
        largest = a 
        other1 = b
        other2 = c
    elif (b >= a) and (b >= c): 
        largest = b
        other1 = a
        other2 = c 
    else: 
        largest = c
        other1 = a
        other2 = b 
    
    if a<=0 or b<=0 or c<=0 or (largest >= other1+other2):
        hasil = "tidak dapat dibangun"
    elif a == b == c:
	    hasil = "Segitiga sama sisi"
    elif a==b or b==c or c==a:
	    hasil = "Segitiga sama kaki"
    elif (largest**2==other1**2+other2**2):
        hasil = "Segitiga siku-siku"
    else:
	    hasil = "Segitiga bebas"

    return hasil



print("Segitiga anda ", segitiga(a,b,c))
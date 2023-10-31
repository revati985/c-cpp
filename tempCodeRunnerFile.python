def karatsuba(x,y):
     if x<10 or y<10:
          return x*y
     else:
          n=max(len(str(x)),len(str(y)))
          half=n//2
          a=x//(10**(half))
          b=x%(10**(half))
          c=y//(10**(half))
          d=y%(10**(half))
          ac=karatsuba(a,c)
          db=karatsuba(b,d)
          ad_plus_bc=karatsuba(a+b,c+d)-ac-db
          return ac*(10**(2*half))+(ad_plus_bc)*(10**(half))+db
x=int(input())
y=int(input())
print(karatsuba(x,y))

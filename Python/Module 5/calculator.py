class calculator:
    brand = 'casio ms99'
    def add(self,a,b):
        print(f'sum:{a+b}')
    def sub(self,a,b):
        print(f'sub:{a-b}')
    def mul(self,a,b):
        print(f'mul:{a*b}')

cal=calculator()
cal.add(2,3)
cal.sub(2,3)
cal.mul(2,3)
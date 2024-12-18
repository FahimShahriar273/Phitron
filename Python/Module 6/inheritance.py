class Device:
    def __init__(self,brand,price,color,origin):
        self.brand= brand
        self.price = price
        self.color = color 
        self.origin = origin
    


class Laptop:
    def __init__(self, memory,ssd):
        self.memory=memory
        self.ssd = ssd
    
    def coding (self):
        print(f'learing python')

class Phone(Device):
    def __init__(self,brand,price,color,origin,dualsim):
        self.dualsim = dualsim
        super().__init__(brand,price,color,origin)
    def __repr__(self):
        return f'Phone : {self.brand}.{self.price} {self.color} {self.origin} {self.dualsim}'

 
    def phonecall(self,number,text):
        print(f'sending sms to : {number} with: {text}')

class Camera:
    def __init__(self, brand, price, color, pixel):
        self.pixel=pixel
  
    def changelance(self):
        print("changing lance")


myphone = Phone('iphone',9999,'silver','china',True)
print(myphone)

    
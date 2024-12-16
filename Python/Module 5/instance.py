class shop:
    shopping_mall = 'jamuna'
    def __init__(self,buyer):
        self.buyer= buyer
        self.cart= []
    def add_to_cart(self,item):
        self.cart.append(item)

meh = shop('mehjabeen')
meh.add_to_cart('shoes')
meh.add_to_cart('phone')
print(meh.cart)

nisho = shop('nishoo')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)
        
apurbo = shop(' apurbo')
apurbo.add_to_cart ('chiruni')
print(apurbo.cart)
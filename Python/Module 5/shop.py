class shop:
    cart=[]
    def __init__(self,buyer):
        self.buyer= buyer
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
        
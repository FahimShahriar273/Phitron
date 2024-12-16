class shopping:
    def __init__(self,name):
        self.name = name
        self.cart = []
        
    def add_to_cart(self,item,price,quantity):
        product = {'item': item, 'price': price , 'quantity':quantity}
        self.cart.append(product)
    def checkout (self,amount):
        total =1
        for item in self.cart:
            #print(item)
            total += item['price']* item['quantity']
        print('total price',total)
        if amount < total:
            print( f'please provide {total - amount} more')
        else:
            extra = amount - total
            print(f'here is your extra money {extra}')

swapan=shopping('alan swapon')
swapan.add_to_cart('alu',55,6)
swapan.add_to_cart('dim',12,24)
swapan.add_to_cart('rice',55,5)


swapan.checkout(11111)

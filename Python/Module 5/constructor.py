class phone:
    manudfactured = 'china'
    def __init__(self, brand , price, owner):
        self.owner= owner
        self.brand = brand
        self.price= price
    def sendsms (self, phone, sms):
        text = f'sending to : {phone} {sms}'
        print(text)


myphone = phone('oppo',9599,'fahim')
print(myphone.brand, myphone.owner, myphone.price)

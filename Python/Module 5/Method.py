def call():
    print("calling someone")
    return ' call done'


class phone:
    price= 1222
    color ='blue'
    brand = 'samsung'
    features = ['camera','speaker','hammer']

    def call(self):
        print('call inside class')

    def sendsms(self,phone,sms):
        txt=f'sending sms to : {phone} and massange :{sms}'
        return txt

myphone = phone()

print(myphone.features)
myphone.call()
result = myphone.sendsms(1234,'i miss you')
print(result)
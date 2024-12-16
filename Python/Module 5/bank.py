class bank:
    def __init__(self,balance):
        self.balance = balance
        self.min_withdraw = 99
        self.max_withdraw=9999
        
    def get_balance(self):
        return self.balance
    def deposit(self,amount):
        if amount >1:
            self.balance += amount 
    def withdraw(self,amount):
        if amount < self.min_withdraw:
            print( f'you cant not withdraw below{self.min_withdraw}')
        elif amount> self.max_withdraw:
            print(f'you cant not withdraw above{self.max_withdraw}')
        else:
            self.balance -=amount
            print( f'here is your money {self.balance}')
        
fahim = bank(19999)
# fahim.withdraw(8)
fahim.withdraw(234)
fahim.withdraw(555)
fahim.withdraw(444)
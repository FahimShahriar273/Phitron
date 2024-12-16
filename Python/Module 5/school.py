class Student:
    def __init__(self,name,currentclass,id):
        self.name=name
        self.id=id
        self.currentclass=currentclass
    def __repr__(self) :
        return f'Student name : {self.name} ,class: {self.currentclass}, id: {self.id}'

class Teacher:
    def __init__(self,name,subject,id):
        self.name=name
        self.subject=subject
        self.id = id

    def __repr__(self):
        return f' teacher: {self.name}, Subject:{self.subject}'
            
class school:
    def __init__(self,name):
        self.name = name
        self.teachers=[]
        self.students=[]
    def add_teachers(self,name,subject,id):
        id=len(self.teacher)+1
        teacher = Teacher(name,subject,id)
        self.teachers.append(teacher)
        
    def enroll(self,name,fee):
        if fee < 6499:
            return ' not enough fee'
        else:
            id = len(self.student)+1
            student= Student (name,'C',id)
            self.students.append(student)
            return f'{name} is enrolled with id: {id}, extra money {fee-6499}'

    def __repr__(self):
        print('Wwlcome: ',self.name)   
        print('-----Our Teachers------')
        for teacher in self.teachers:
            print(teacher)
        print('-----Our Students------')
        for student in self.students:
            print(student)
           


#alia = Student('alia',9,1)
#ranbir = Teacher('Ranvir','algorithm',11)
#print(alia)
#print(ranbir)
phitron = school('Phitron')
phitron.enroll('alia',5200)    
# phitron.enroll('Rani',8000)
phitron.enroll('fahim',9000)
phitron.enroll('vaijaan',9000)

phitron.add_teachers('Tom','DS')
phitron.add_teachers('decap','algo') 
phitron.add_teachers('AJ','DB') 

print(phitron)
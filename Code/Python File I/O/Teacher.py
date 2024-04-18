from Person import Person

class Teacher(Person):
    def __init__(self, name, age, subject):
        self.subject = subject
        super().__init__(name, age)
from Person import Person

class Student(Person):
    def __init__(self, name, age, classRoom):
        self.classRoom = classRoom
        super().__init__(name, age)

    def to_dict(self):
        data = super().to_dict()
        data["classRoom"] = self.classRoom

        return data
import uuid
from FileStorage import FileStorage

class Person:
    def __init__(self, name, age):
        self.id = uuid.uuid4().hex
        self.name = name
        self.age = age
        FileStorage.listOfPersons.append(self.to_dict())

    def to_dict(self):
        data = {}

        data["id"] = self.id
        data["name"] = self.name
        data["age"] = self.age

        return data

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, name):
        if not isinstance(name, str):
            raise TypeError("Name should be a string")
        if len(name) == 0:
            raise ValueError("Name should not be empty")
        self.__name = name
    
    @property
    def age(self):
        return self.__age

    @age.setter
    def age(self, age):
        if not isinstance(age, int):
            raise TypeError("Age should be a integer")
        if age < 0:
            raise ValueError("Age should be greater than 0")
        self.__age = age
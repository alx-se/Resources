import json

class FileStorage:
    listOfPersons = []
    fileName = 'persons.json'

    @classmethod
    def read_from_json(cls):
        with open(cls.fileName, 'r') as file:
            cls.listOfPersons = json.load(file)
            return cls.listOfPersons

    @classmethod
    def save_to_json(cls):
        with open(cls.fileName, 'w') as  file:
            json.dump(cls.listOfPersons, file)
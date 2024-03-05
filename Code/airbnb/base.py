import datetime
import uuid
"""
created
updated
soft_deleted
id
"""


class Base:
    def __init__(self):
        self.created_at = datetime.datetime.now()
        self.updated_at = self.created_at
        self.soft_deleted = False
        self.id =  uuid.uuid4().hex

    def __str__(self):
        return f"{self.to_dict()}"
    
    def to_dict(self):
        a = self.__dict__
        del a['soft_deleted']
        return a
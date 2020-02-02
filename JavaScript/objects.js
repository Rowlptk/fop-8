const person = {
    firstName : 'Steve',
    lastName : 'Smith',
    age : 36,
    email : 'steve@gmail.com',
    hobbies : ['music', 'sports'],
    address : {
        city: 'Miami',
        State : 'FL'
    },
    getBirthYear : function() {
        return 2020 - this.age;
    }
}

let val;

val = person;
val = person.firstName;
val = person['lastName'];
val = person.age;
val = person.hobbies[1];
val = person.address.city;
val = person.address['State'];
val = person.getBirthYear();
val = person;
console.log(val);
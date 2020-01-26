// Primitive

// Undefined
let data;
console.log(typeof data);

// String
data = 'Hello';
console.log(typeof data);

// number
data = 123.56;
console.log(typeof data);

// boolean
data = false;
console.log(typeof data);

// Null
data = null;
console.log(typeof data);

// Refrence type
// array
data = ['movies','music'];
console.log(typeof data);

// object literals
data = {
    city: 'Kathmandu',
    state: 'Bagmati'
}
console.log(typeof data);

// Date objects (inbuilt)
data = new Date();
console.log(data);
console.log(typeof data);

// functions
data = function() {
    alert('Hello');
}

console.log(typeof data);
console.log(data);
console.log(data());
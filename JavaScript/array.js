// Create Some arrays
const numbers = [45,56,33,23,44,36,5];
const numbers2 = new Array(22,45,33,76,54);
const fruit = ['Apple', 'Banana', 'Orange', 'Pear'];
const mixed = [22,'Hello',true, undefined, null, {a:1, b:1}, new Date()];

let val;

// Get array length
val = numbers.length;
//  Get value
val = numbers[2];

// insert into arrays
numbers[2] = 100;

// finding index
val = numbers.indexOf(44);

// Mutating arrays
// Add one to end
numbers.push(250);

// Add one to front
numbers.unshift(120);

// Take off from end
numbers.pop();

// Take off from front
numbers.shift();

// splice
numbers.splice(1,1);

numbers.splice(1,0,56);

console.log(val);
console.log(numbers);

// object, Miscellenious, DOM Manipulation, app
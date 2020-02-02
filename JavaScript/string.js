const firstName = 'William';
const lastName = 'Johnson';
const age = 36;
const str = 'Hello there my name is Brad';
const tags = "web design, web development, programming";

let val;

// Concatenation
val = firstName + lastName;
val = firstName + ' ' + lastName;

// Append
val = "Brad";
//val = val + 'Traversy';
val += ' Traversy';

val = "Hello, my name is " + firstName + ' and I am ' + age;

// Escaping
val = 'That\'s awesome, I can\'t wait';

// length
val = firstName.length;

// concat()
val = firstName.concat(' ',lastName);

// Change case
val = firstName.toLowerCase();
val = firstName.toUpperCase();

// William
val = firstName[5];

// indexOf();
val = firstName.indexOf('l');
val = firstName.lastIndexOf('l');

// charAt();
val = firstName.charAt('5');
// get last char
val = firstName.charAt(firstName.length - 1);

// slice();
val = firstName.slice(0,4);
val = firstName.slice(-4);

// split();
// Apple ==> [A,p,p,l,e]
val = tags.split(',');
val = str.split(" ");
val = str.split("e");
val = str.split("");

// replace
val = str.replace('Brad','John');

let str1 = "Brad brad BRAD brad BRAD brad bRaD BrAd";
val = str1.replace(/brad/gi,'john');
// g ==> global match
// i ==> case insensitive match 
// pattern syntax==> /pattern/
console.log(val);
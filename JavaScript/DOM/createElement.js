// Create Element
const li = document.createElement('li');

// Add Class
li.className = 'collection-item';

// Add id
li.id = 'new-item';

// Add attribute
li.setAttribute('title','New Item');

// create text
const text = document.createTextNode('Hello World');

// append text to li
li.appendChild(text);

// create link
const link = document.createElement('a');
// add classes
link.className = 'delete-item secondary-content';
// add icon
link.innerHTML = '<i class="fa fa-remove"></li>';

// link add to li
li.appendChild(link);

// append li to ul
document.querySelector('ul.collection').appendChild(li);

console.log(li);
console.log(text);
console.log(link);

// remove element
const litem = document.querySelectorAll('li')

const ul = document.querySelector('ul');

litem[3].remove();
ul.remove();
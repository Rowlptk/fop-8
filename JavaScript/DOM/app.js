let val;

// val = document;
// val = document.body;
// val = document.URL;

// // single element Selector
// val = document.getElementById('task-title');

// let task = document.querySelector('#task-title');

// // Change Styling
// task.style.background = '#333';
// task.style.color = '#fff';
// task.style.padding = '5px';

// // change content
// task.textContent = 'X-men';
// task.innerText = 'Avengers';
// task.innerHTML = '<span style="color:yellow">Hobbits</span>';

// val = document.querySelector('.card-title');
// val = document.querySelector('h5');
// val = document.querySelector('li');
// val = document.querySelector('ul li');
// val = document.querySelector('li:first-child');
// val = document.querySelector('li:last-child');
// val = document.querySelector('li:nth-child(3)');
// val = document.querySelector('li:nth-child(even)');
// val = document.querySelector('li:nth-child(odd)');

// // Multiple Element Selector
// val = document.getElementsByClassName('collection-item');

// val[1].style.color = 'yellow';

// val = document.getElementsByTagName('li');

// val = document.querySelectorAll('ul.collection li.collection-item');

// val.forEach(function(item, index) {
//     item.textContent = `${index} : Hello`;
// })

// parent, child, siblings

const list = document.querySelector('ul.collection');
const listItem = document.querySelector('li.collection-item')

val = list.children[1];
val.textContent = 'Hello World!';
list.children[2].children[0].textContent = 'close';

val = listItem.parentElement;
val = listItem.parentElement.parentElement;

val = listItem.nextElementSibling.nextElementSibling.previousElementSibling;

console.log(val);
//console.log(task);
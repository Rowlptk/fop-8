// Define UI vars
const form = document.querySelector('#task-form');
const taskInput = document.querySelector('#task');
const filter = document.querySelector('#filter');
const taskList = document.querySelector('.collection');
const clearBtn = document.querySelector('.clear-tasks');




    // Add Task Event
    form.addEventListener('submit', addTask);

// Add Task
function addTask(e) {
    if(taskInput.value === ''){
        alert('Add a task');
    }
    else {
        // create li
        const li = document.createElement('li');
        // add class
        li.className = 'collection-item'
        // create text
        const text = document.createTextNode(taskInput.value);
        // append with li
        li.appendChild(text);
        // create link
        link = document.createElement('a');
        // add class to link
        link.className = 'delete-item secondary-content';
        // add icon to link
        link.innerHTML = '<i class="fa fa-remove"></i>';
        // append link to li
        li.appendChild(link);

        // Add to UI
        taskList.appendChild(li);
    } 
    //console.log(li);
}
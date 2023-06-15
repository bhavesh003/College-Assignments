class Stack {
    constructor() {
        this.items = [];
    }
    add(element) {
        return this.items.push(element);
    }
    remove() {
        if(this.items.length > 0) {
            return this.items.pop();
        }
    }
    clear(){
        this.items = [];
    }
}

let stack = new Stack();
console.log("\nInsert an Element in Stack");
stack.add(2);
stack.add(4);
stack.add(6);
stack.add(8);
stack.add(10);
console.log(stack.items);
console.log("\nDelete an Element from Stack");
stack.remove();
console.log(stack.items);
console.log("\nDisplay the Content of Stack");
console.log(stack.items);

class Queue {
    constructor() {
        this.items = [];
    }
    enqueue(element) {
        return this.items.push(element);
    }
    dequeue() {
        if(this.items.length > 0) {
            return this.items.shift();
        }
    } 
    clear(){
        this.items = [];
    }
}
let queue = new Queue();
console.log("\nInsert an Element in Queue");
queue.enqueue(13);
queue.enqueue(15);
queue.enqueue(19);
queue.enqueue(21);
queue.enqueue(23);
console.log(queue.items);
console.log("\nDelete an Element from Queue");
queue.dequeue();
console.log(queue.items);
console.log("\nDisplay the Content of Queue");
console.log(queue.items);
import { useState } from "react";
import Lifecycle from "./Components/Lifecycle";
function App() {
  const [todoList, setTodoList] = useState([]);
  const [newTask, setNewTask] = useState("");
  const [name, setName] = useState("");

  const handleChange = (event) => {
    setNewTask(event.target.value);
  };

  const handleName = (event) => {
    setName(event.target.value);
  };

  const handleClick = () => {
    const addTask = {
      id: todoList.length === 0 ? 1 : todoList[todoList.length - 1].id + 1,
      taskName: newTask,
      firstName: name,
    };
    setTodoList([...todoList, addTask]);
  };

  const handleDelete = (id) => {
    const newTodoList = todoList.filter((taskname) => {
      if (id === taskname.id) {
        return false;
      } else {
        return true;
      }
    });
    setTodoList(newTodoList);
  };

  const age = 16;
  const flag = true;
  const arr = ["hi", "hello", "greet", "arigato"];
  return (
    <>
      {/* <Salary name="mohit" />
      <Salary name="riya" />
      <Salary name="chiya" /> */}
      {/* {age >= 18 ? <h1>Above age</h1> : <h1>Under age</h1>}
      <h2 style={{ color: flag ? "red" : "green" }}> color </h2>

      {arr.map((name) => {
        return <h1>{name}</h1>;
      })} */}
      <div>
        <div>
          <input onChange={handleChange} />
          <input onChange={handleName} />
          <button onClick={handleClick}>Add Tasks</button>
        </div>
        <div>
          {todoList.map((item) => {
            return (
              <div>
                <h1>{item.taskName}</h1>
                <h2>{item.firstName}</h2>
                <button onClick={() => handleDelete(item.id)}>X</button>
              </div>
            );
          })}
        </div>
      </div>
      <Lifecycle />
    </>
  );
}

function Salary(props) {
  return <h1>{props.name}</h1>;
}

export default App;

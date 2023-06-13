function App() {
  return (
    <>
      <Salary name="mohit" />
      <Salary name="riya" />
      <Salary name="chiya" />
    </>
  );
}

function Salary(props) {
  return <h1>{props.name}</h1>;
}

export default App;

function App() {
  const age = 16;
  const flag = true;
  return (
    <>
      {/* <Salary name="mohit" />
      <Salary name="riya" />
      <Salary name="chiya" /> */}
      {age >= 18 ? <h1>Above age</h1> : <h1>Under age</h1>}
      <h2 style={{ color: flag ? "red" : "green" }}> color </h2>
    </>
  );
}

function Salary(props) {
  return <h1>{props.name}</h1>;
}

export default App;
